class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        for(int i: stones)
            pq.push(i);
        
        while(pq.size()>1){
            int weight = pq.top();
            pq.pop();
            weight -= pq.top();
            pq.pop();
            if(weight)
                pq.push(weight);
        }
        if(pq.empty()) return 0;
        return pq.top();
    }
};