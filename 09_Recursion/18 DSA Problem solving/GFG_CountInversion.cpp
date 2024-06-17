//count inversion
#include<iostream>
#include<vector>
using namespace std;

void merge(long long arr[], int start, int mid, int end, int &count){
    //create a temperory array/vector of combined size of both the arrays
	vector<int> temp(end-start+1);
	//create three variables to point to three different arrays
	int left=start;//to point to left part
	int right = mid+1;//to point right part
	int index = 0;//to point temp
	//merge sorted arrays
	while(left<=mid && right<=end){
		if(arr[left]<=arr[right]){
			temp[index] = arr[left];
			left++;
			index++;
		}else{
			temp[index] = arr[right];
			count += (mid - left + 1);
			right++;
			index++;
		}
	}
	//add the remaining values of array
	while(left<=mid){
		temp[index] = arr[left];
		left++;
		index++;
	}
	while(right<=end){
		temp[index] = arr[right];
		right++;
		index++;
	}
	
	//now copy this temp array into original arr
	index=0;
	while(start<=end){
		arr[start] = temp[index];
		start++;
		index++;
	}
}

void mergeSort(long long arr[], int start, int end, int &count){
    //this function will divide the array in two equal halves and 
    //count the no. of inversions in each half using recursion 
    if(start == end)
        return;
        
    //find the mid to divide array
    int mid = start + (end-start)/2;
    
    //apply countInversion on both the halves
    mergeSort(arr, start, mid, count);
    mergeSort(arr, mid+1, end, count);
    
    //then return the addition of left part count + right part count
    merge(arr, start, mid, end, count);
}

int main(){
	int n, count=0;
	long long  arr[100];
	cout<<"Enter size of array: ";
	cin>>n;
	cout<<"Enter Array Elements: ";
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	mergeSort(arr, 0, n-1, count);
	cout<<"Count : "<<count<<endl;
	for(int i=0; i<n; i++){
		cout<<arr[i]<<endl;
	}
	return 0;
}
