class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> q;
        stack<int> st;
        // i=0 is the front of queue
        for(int i : students){
            q.push(i);
        }
        //i=0 is the top os stack
        for(int i=sandwiches.size()-1; i>=0; i--)
            st.push(sandwiches[i]);
        
        while(!q.empty()){//or we can give !s.empty()
            int noOfStudents=q.size();
            //loop no of students times to check if you find a student who wants top of stack
            //if yes, then remove that element from stack and queue and break
            //after loop, if queue size is changed means we can find further soln
            //but if queue is still the same then no student is interested in TOS,so break
            for(int i=1; i<=noOfStudents; i++){
                if(q.front() == st.top()){
                    q.pop();
                    st.pop();
                    break;
                }
                //o.w. move front of queue to the end
                int student = q.front();
                q.pop();
                q.push(student);
            }

            if(q.size() == noOfStudents)
                break;
        }
        return q.size();
    }
};