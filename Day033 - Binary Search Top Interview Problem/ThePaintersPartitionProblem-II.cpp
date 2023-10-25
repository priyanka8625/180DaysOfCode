
class Solution
{
  public:
    long long minTime(int A[], int n, int k)
    {
        long long start=0, end = 0, mid=0, ans=-1;
        
        // find max and sum of A
        for(int i=0; i<n;i++){
            end += A[i];
            if(A[i]>start)
                start = A[i];
        }
        
        int time=0, count=1;
        while(start<=end){
            mid = start + (end-start)/2;
            time = 0;
            count = 1;
            for(int i=0; i<n; i++){
                time += A[i];
                if(time>mid){
                    count++;
                    time = A[i];
                }
            }
            if(count<=k){
                ans = mid;
                end = mid - 1;
            }else
                start = mid+1;
        }
        return ans;
    }
};

