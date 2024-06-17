int Solution::removeDuplicates(vector<int> &A) {
    int n=A.size();
    int i=0,j=0,ans=0;
    while(i<n){
        while(A[i]==A[i+1] && i<n-1) i++;
        swap(A[i++],A[j++]);
        ans++;
    }
    return ans;
}
// ans = number of distinct elements
//it only checks first (ans) number of elements from the beginning so we have
//to only bring the distinct elements in array to beginning and return ans
