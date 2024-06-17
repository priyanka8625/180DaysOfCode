
class Solution
{
    public:
    //Function to merge k sorted arrays.
    vector<int> mergeKArrays(vector<vector<int>> arr, int K)
    {
        //code here
        vector<pair<int, pair<int, int>>> temp;
        for(int i=0; i<K; i++)
            temp.push_back(make_pair(arr[i][0], make_pair(i, 0)));
            
        // create a min heap
        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>> > pq(temp.begin(), temp.end());
        vector<int> ans;
        while(!pq.empty()){
            //get the minimum element
            pair<int, pair<int, int>> element = pq.top();
            pq.pop();
            ans.push_back(element.first);
            
            //insert the next min ele adjacent to element
            int i=element.second.first;
            int j=element.second.second;
            if(j+1<K)
                pq.push(make_pair(arr[i][j+1], make_pair(i, j+1)));
        }
        return ans;
    }
};
