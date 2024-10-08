class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        //take first those intervals whoch are having low end time 
        // so that they can leave more space for other intervals
        sort(intervals.begin(), intervals.end(), [&](vector<int> a, vector<int> b){
            return a[1]<b[1];
        });

        int count=0, start=intervals[0][0], end=intervals[0][1], n=intervals.size();
        for(int i=1; i<n; i++){
            //overlapping interval
            if(intervals[i][0] < end){
                //so remove this interval
                count++;
                continue;
            }
            //take this new interval
            start = intervals[i][0];
            end = intervals[i][1];
        }
        return count;
    }
};