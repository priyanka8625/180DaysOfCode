#include<iostream>
using namespace std;

//we can access the child's parent of binary tree represented in an array as:
//(child_index-1)/2
//we can access the left and right children of a node in binary tree which is represented in the form of array as:
//left child index = 2*parent_index+1
//right child index = 2*parent_index+2
	

class MaxHeap{
	int *arr;
	int size;//this is current size of heap, total values present in heap
	int total_size;//toal capacity of heap, max elements it can hold
	public:
		MaxHeap(int n){
			arr = new int[n];
			size = 0;
			total_size=n;
		}
		
		//insert in heap
		void insert(int val){
			//O(nlogn) time
			if(size == total_size){
				//heap overflow
				cout<<"Heap underflow!!"<<endl;
				return;
			}
			//if heap has enough space
			arr[size] = val;
			int index = size;
			size++; 
			
			//rearrange the heap to make it hold the max heap property
			//compare the recently added chid with it's parents and swap them if order is not maintained
			while(index>0 && arr[(index-1)/2] < arr[index]){
				swap(arr[(index-1)/2], arr[index]);
				index = (index-1)/2; //go to the upper level i.e. at parent's position where current element has been swaped now
			}
			cout<<arr[index]<<" is inserted into MaxHeap!!"<<endl;
		}
		void del(){
//			O(logn):logn for heapify()
			//in deletions of maxheap, we always delete the maximum element of heap 
			//in short we delete the root node which always contains the max value of the heap
			//to delete the root node, we'll use following algorithm
			//1. assign the value of the last element in heap at the root position(we'll take last ele to maintain the complete binary tree)
			//2. compare the root node (i.e. last element of heap) with it's left and right children
			//3. the one which is maximum between left and right child will swapped with the current index 
			//4. update the index of the node to be compared i.e. the position where root has been swapped
			//5. repeat steps 2 -4 unless current index value is greater than both of it's children or when the left and right children aren't present
			//HEAPIFY: steps 2 to 5 represent the operation heapify which means place the element at it's correct position
			if(size==0){
				cout<<"Heap underflow!!"<<endl;
				return;
			}
			cout<<arr[0]<<" deleted from heap!!"<<endl;
			arr[0] = arr[size-1];
			size--;
			if(size==0)
				return;
			
			//apply heapify: place curren index value at it's correct place
			Heapify(0);
		}
		void Heapify(int index){
			int largest = index;
			int left = 2*index+1;
			int right = 2*index+2;
			//largest will store the index of element which is greater between parent, left, right child
			if(left < size && arr[left]>arr[largest])
				largest = left;
			if(right<size && arr[right]>arr[largest])
				largest = right;
			
			if(largest != index){
				//if largest element is one of the children then swap it with current value 
				//and again heapify the current value whose position is now changed to it's child's position
				swap(arr[largest], arr[index]);
				Heapify(largest);
			}else
				return;//if index is the right position for the value
		}
		void print(){
			cout<<"MaxHeap:"<<endl;
			for(int i=0; i<size; i++){
				cout<<arr[i]<<" ";
			}
			cout<<endl;
		}
};

int main(){
	MaxHeap h1(6);
	h1.insert(10);
	h1.insert(20);
	h1.print();
	h1.del();
	h1.del();
	h1.del();
	h1.print();
}
