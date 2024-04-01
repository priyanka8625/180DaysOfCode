class Solution {
  public:
    vector<int> kthLargest(int k, int arr[], int n) {
        // code here
        //create a min heap to store the k largest elements of arr upto i'th index
        priority_queue<int, vector<int>, greater<int>> pq;
        vector<int> ans(n);
        //insert k-1 elements as -1 into array at the same time maintain minheap
        for(int i=0; i<k-1; i++){
            pq.push(arr[i]);
            ans[i] = -1;
        }
        //insert k'th largest element into array 
        pq.push(arr[k-1]);
        ans[k-1] = pq.top();
        
        //for remaining elements, get the k'th largest element at each index and update 
        //minheap when you find greater ele than the smallest ele of pq
        for(int i=k; i<n; i++){
            if(arr[i] > pq.top()){
                pq.pop();
                pq.push(arr[i]);
            }
            ans[i] = pq.top();
        }
        return ans;
    }
};