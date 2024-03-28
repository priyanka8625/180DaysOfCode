class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        long long ans=0;
        priority_queue<int> pq;
        for(int i:gifts)
            pq.push(i);

        while(k-- && !pq.empty()){
            int gift = pq.top();
            pq.pop();
            gift = sqrt(gift);
            if(gift)
                pq.push(gift);
        }

        while(!pq.empty()){
            ans += pq.top();
            pq.pop();
        }
        return ans;
    }
};