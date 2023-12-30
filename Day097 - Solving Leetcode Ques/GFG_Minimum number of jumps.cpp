
class Solution{
  public:
    int minJumps(int arr[], int n){
        int maxi=0;
        int maxR=0;
        int jumps=0;
        if(n==1){
            return 0;
        }
        if(arr[0]==0){
            return -1;
        }
        for(int i=0;i<n;i++){
            maxi=max(maxi,i+arr[i]);
            if(i==maxR){
                maxR=maxi;
                jumps++;
                if(maxR>=n-1){
                    return jumps;
                }
            }
        }
        return -1;
    }
};
