class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
        //we'll create a minheap storing the k smallest elements of k rows
        //in form : data, row, col
        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;
        //insert the first elements of k lists in pq
        int k=nums.size(), maximum=INT_MIN, minimum=0;
        for(int i=0; i<k; i++){
            pq.push(make_pair(nums[i][0], make_pair(i, 0)));
            maximum = max(maximum, nums[i][0]);
        }
        minimum = pq.top().first;
        //now insert this min and max into ans
        vector<int> ans(2);
        ans[0] = minimum;
        ans[1] = maximum;

        //but this might not be the optimal answer for k lists, so we need to find a smaller range
        //hene, until we have k number of elements in pq i.e. each one from k lists
        //then
        pair<int, pair<int, int>> temp;
        int data, row, col;
        while(pq.size() == k){
            temp = pq.top();
            pq.pop();

            //extract the values in temp
            data = temp.first;
            row = temp.second.first;
            col = temp.second.second;

            //add the next element of data into pq 
            if(col+1<nums[row].size()){
                pq.push(make_pair(nums[row][col+1], make_pair(row, col+1)));
                //update min max
                maximum = max(maximum, nums[row][col+1]);
                minimum = pq.top().first;
                //compare it with the ans range
                if(maximum-minimum < ans[1]-ans[0]){
                    // update ans
                    ans[0] = minimum;
                    ans[1] = maximum;
                }
            } 
        } 
        return ans;
    }
};