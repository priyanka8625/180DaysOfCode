class Solution{
public:
    int equalPartition(int N, int arr[])
    {
        // code here
        int sum=0;
        for(int i=0; i<N; i++){
            sum+= arr[i];
        }
        //if sum is odd then we can't partitio the arr into two parts with equal sum
        if(sum%2!=0)
            return 0;
        //else we'll just check if we can get a subset with half the total sum of arr
        //if yes it means we can also get the other subset with remaining half sum
        //using top-down approach
        int expSum=sum/2;
        vector<vector<int>> t(N+1, vector<int>(expSum+1, -1));
        
        //initializing with base condn of recursion
        for(int i=0; i<=N; i++){
            for(int j=0; j<=expSum; j++){
                if(i==0)
                    t[i][j] = 0;
                if(j==0)
                    t[i][j] = 1;
            }
        }
        
        for(int i=1; i<=N; i++){
            for(int j=1; j<=expSum; j++){
                if(arr[i-1]<=j){
                    t[i][j] = t[i-1][j-arr[i-1]] || t[i-1][j];
                }else{
                    t[i][j] = t[i-1][j];
                }
            }
        }
        return t[N][expSum];
    }
    
};