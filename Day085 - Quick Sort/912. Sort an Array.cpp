class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        quickSort(nums, 0, nums.size()-1);
        return nums;
    }
    
    void quickSort(vector<int> &arr, int start, int end){
        if(start>=end)//if only single or no elements are present in array
            return;
        
        //apply partitioning in the current array i.e. start to end and get the correct pos of pivot element
        int pivot = partition(arr, start, end);
        //apply partitioning in the left part
        quickSort(arr, start, pivot-1);
        //apply partitioning in the right part
        quickSort(arr, pivot+1, end);
    }
    int partition(vector<int> &arr, int start, int end){
        int pos = start;//to keep track of the next element to be placed at the left of pivot's correct position
        for(int i=start; i<=end; i++){
            if(arr[i]<=arr[end]){
                //if current element is <= pivot element then place it on the left side i.e. pos
                swap(arr[pos], arr[i]);
                pos++;
            }
        }
        return pos-1;//after partitioning pos-1 will point to correct pivot index;
    }
};
