class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> pq;//create a minheap
        //get the first k elements to compare with the rest of the array
        for(int i=0; i<k; i++)
            pq.push(nums[i]);

        //queue will maintain the k largest elements upto index i
        for(int i=k; i<nums.size(); i++){
            //if the current element is greater than the top of queue, which is the smallest possible of nums
            //then we can insert the current element to queue
            if(nums[i] > pq.top()){
                pq.pop();
                pq.push(nums[i]);
            }
        }
        return pq.top();
    }
};