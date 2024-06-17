class Solution {
public:
    int fillCups(vector<int>& amount) {
        int count=0;
        priority_queue<int> pq;
        for(int i:amount)
            if(i)
                pq.push(i);
        
        while(pq.size()>1){
            int maxAmt = pq.top();
            pq.pop();
            int maxAmt1 = pq.top();
            pq.pop();
            if(maxAmt-1 > 0)
                pq.push(maxAmt-1);
            if(maxAmt1-1>0)
                pq.push(maxAmt1-1);
            count++;
        }
        while(!pq.empty()){
            int maxAmt = pq.top();
            pq.pop();
            if(maxAmt-1>0)
                pq.push(maxAmt-1);
            count++;
        }
        return count;
    }
};