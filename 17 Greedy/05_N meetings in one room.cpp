class Solution {
  public:
    // Function to find the maximum number of meetings that can
    // be performed in a meeting room.
    int maxMeetings(int n, int start[], int end[]) {
        // Your code here
        vector<pair<int, int>> pairs(n);
        //jo sabse pehle khatam hogi vo bakiyo ke liye zyada empty space degi
        for(int i=0; i<n; i++){
            pairs[i] = {end[i], start[i]};
        }
        sort(pairs.begin(), pairs.end());
        
        int count=1;//atleast one meeting will be held even if n==1
        int prevEnd = pairs[0].first, startTime=0;
        for(int i=1; i<n; i++){
            startTime = pairs[i].second;
            if(startTime > prevEnd){
                count++;
                prevEnd = pairs[i].first;
            }
        }
        return count;
    }
};