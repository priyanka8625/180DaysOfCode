class Solution 
{
    public:
    //Function to find minimum number of pages.
    int findPages(int A[], int N, int M) 
    {
        int start=0, end = 0, mid=0, ans=-1;
        if(M>N){
            //when students are more than books
            return -1;
        }
        
        // find max and sum of A
        for(int i=0; i<N;i++){
            end += A[i];
            start = max(start, A[i]);
        }
        
        int pages=0, studentCount=1;
        while(start<=end){
            mid = start + (end-start)/2;
            pages = 0;
            studentCount = 1;
            for(int i=0; i<N; i++){
                pages += A[i];
                if(pages>mid){
                    studentCount++;
                    pages = A[i];
                }
            }
            if(studentCount<=M){
                ans = mid;
                end = mid - 1;
            }else
                start = mid+1;
        }
        return ans;
    }
};
