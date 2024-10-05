class Solution {
public:
    vector<int> getOrder(vector<vector<int>>& tasks) {
        vector<int> ans;
        long n = tasks.size(), timer=1;
        for(int i=0; i<n; i++){
            //preserve indices of tasks
            tasks[i].push_back(i);
        }
        sort(tasks.begin(), tasks.end());
        //iitialize timer with the first jobs arrival time
        timer = tasks[0][0];
        //now take all the processes available at timer instance in cpu and take the min out of them
        //at each instance
        int index=0;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        while(index<n || !pq.empty()){
            while(index<n && tasks[index][0]<=timer){
                //push all the minheap such that te tasks are <= current timer
                pq.push({tasks[index][1], tasks[index][2]});
                index++;
            }
            //now take out the min task and execute it
            if(!pq.empty()){
                ans.push_back(pq.top().second);
                timer += pq.top().first;
                pq.pop();
            }else{
                //if no tasks are available a curr time instance then update the timer to next tasks enqueue time so that we optimally get the next job to process
                timer = tasks[index][0];
            }
        }
        return ans;
    }
};