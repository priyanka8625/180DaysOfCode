class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int A[], int n, int X)
    {
        for(int i=0; i<n-1; i++){
            bool flag = true;
            for(int j=i+1; j<n; j++){
                if(A[i]>A[j])
                    swap(A[i], A[j]);
                    flag = false;
            }
            if(flag)
                break;
        }
        for(int i=0; i<n-2; i++){
            int find = X - A[i];
            int start = i+1, end = n-1;
            while(start<end){
                int sum = A[start] + A[end];
                if(sum == find)
                    return 1;
                else if(sum < find)
                    start++;
                else
                    end--;
            }
        }
        return 0;
    }

};
