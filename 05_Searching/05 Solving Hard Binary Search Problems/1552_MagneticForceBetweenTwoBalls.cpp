class Solution {
public:
    bool solve(vector<int>& position, long long m,long long limit)

    {
        long long k=1;
        long long prev=position[0];
        for(long long i=1;i<position.size();i++)
        {
            if(position[i]-prev>=limit)
            {
                k++;
                prev=position[i];
            }
            if(k>=m) return 1;
        }
        return 0;
    }
    long long maxDistance(vector<int>& position, long long m) {
        long long i=0;
        long long j=0;
        for(auto it:position) j+=it;
        sort(position.begin(),position.end());
        long long ans=0;
        while(i<=j)
        {
            long long mid=(i+j)/2;
            if(solve(position,m,mid))
            {
                i=mid+1;
                ans=mid;
            }
            else j=mid-1;
        }
        return ans;

    }
};
