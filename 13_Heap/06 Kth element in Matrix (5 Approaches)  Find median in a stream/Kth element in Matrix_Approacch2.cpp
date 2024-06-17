
int kthSmallest(int mat[MAX][MAX], int n, int k)
{
    //Your code here
    //we'll apply binary search
    int start = mat[0][0], end=mat[n-1][n-1], mid=0;
    //start is the smallest element in array and end is the largest
    //ans will lie between these two points only 
    while(start<=end){
        mid = start+(end-start)/2;
        //count the no. of elements in array <= mid
        int count=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(mat[i][j] <= mid)
                    count++;
            }
        }
        
        //if this count is < k, it means we need to move our start pointer to get a value which can be k'th smallest
        if(count < k){
            start = mid+1;
        }else{
            //even when k==count, it may happend that for an element which is actually not present in array,
            //we're getting count==k, so move end to left unless we don't get start and end on the same element
            //which will be nothing but our answer
            end = mid -1;
        }
    }
    return start;
}
