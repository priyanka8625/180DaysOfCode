class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& scores) {
        unordered_map<int, int> mpEle;//to map element with index
        priority_queue<int> pq;//to get highest score 
        int n = scores.size();
        vector<string> ans(n, "");//to store result

        for(int i=0; i<n; i++){
            pq.push(scores[i]);
            mpEle[scores[i]] = i;
        }
        int place=1;
        while(!pq.empty()){
            int maxscore = pq.top();
            pq.pop();
            if(place==1)
                ans[mpEle[maxscore]] = "Gold Medal";
            else if(place==2)
                ans[mpEle[maxscore]] = "Silver Medal";
            else if(place==3)
                ans[mpEle[maxscore]] = "Bronze Medal";
            else
                ans[mpEle[maxscore]] = to_string(place);
            place++;
        }
        return ans;
    }
};