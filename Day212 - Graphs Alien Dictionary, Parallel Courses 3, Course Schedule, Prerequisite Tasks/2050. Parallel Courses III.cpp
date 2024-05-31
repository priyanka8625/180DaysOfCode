class Solution {
public:
    int minimumTime(int n, vector<vector<int>>& relations, vector<int>& time) {
        //let's apply kahn's algorithm
        vector<int> indeg(n, 0);
        vector<int> adjList[n];
        //create adjList and indeg
        for(int i=0; i<relations.size(); i++){
            //convert the courses into 0 based indexing 
            adjList[relations[i][0]-1].push_back(relations[i][1]-1);
            indeg[relations[i][1]-1]++;
        }

        queue<int> q;
        vector<int> courseTime(n, 0);//to store curr course completion status
        //push independant courses i.e. indeg==0
        for(int i=0; i<n; i++)
            if(!indeg[i])
                q.push(i);
        
        while(!q.empty()){
            int course = q.front();
            q.pop();

            //decrease indegs of adj nodes
            for(int ele : adjList[course]){
                indeg[ele]--;
                if(!indeg[ele]){
                    q.push(ele);
                }
                //curr coursetime = max(prevcourseTimes)
                //update course time of curr ele to prev course completion time + it's own time
                //an take max of both to get the accurate time of completing curr course
                courseTime[ele] = max(courseTime[ele], courseTime[course] + time[course]);
            }
        }

        //now take the max of the corseTime array
        int ans=0;
        for(int i=0; i<n; i++){
            ans = max(ans, courseTime[i]+time[i]);
        }
        return ans;
    }
};