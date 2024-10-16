class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> ans;
        //push all non overlapping intervals of given array
        int i=0, n=intervals.size();
        while(i<n && newInterval[0]>intervals[i][1]){
            ans.push_back(intervals[i]);
            i++;
        }
        if(i==n){
            ans.push_back(newInterval);//insert new at end
            return ans;
        }
        //now merge all the overlapping intervals 
        while(i<n && newInterval[1]>=intervals[i][0]){
            newInterval[0] = min(intervals[i][0], newInterval[0]);
            newInterval[1] = max(intervals[i][1], newInterval[1]);
            i++;
        }
        //insert the merged interval
        ans.push_back(newInterval);

        //now insert if any intervals are remaining in the array
        while(i<n){
            ans.push_back(intervals[i]);
            i++;
        }
        return ans;
    }
};