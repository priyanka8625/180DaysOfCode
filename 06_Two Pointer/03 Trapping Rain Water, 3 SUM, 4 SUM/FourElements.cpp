
//User function Template for C++

bool find4Numbers(int A[], int n, int X)  
{
    //sort the array so that we can apply two pointer
    for(int i=0; i<n-1; i++){
        bool flag = true;
        for(int j=i+1; j<n; j++){
            if(A[i]>A[j]){
                swap(A[i], A[j]);
                flag = false;
            }
        }
        if(flag)
            break;
    }
    //loop to find 4sum
    for(int i=0; i<n-3; i++){
        int find3sum = X - A[i];
        //loop to find 3sum
        for(int j=i+1; j<n-2; j++){
            int find2sum = find3sum - A[j];
            int start = j+1, end=n-1;
            //loop to find 2sum
            while(start<end){
                int sum = A[start] + A[end];
                if(sum == find2sum)
                    return 1;
                else if(sum < find2sum)
                    start++;
                else
                    end--;
            }
        }
    }
    return 0;
}
