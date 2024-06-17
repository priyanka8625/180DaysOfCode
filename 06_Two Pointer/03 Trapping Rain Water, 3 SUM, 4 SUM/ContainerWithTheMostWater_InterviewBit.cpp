int Solution::maxArea(vector<int> &A) {
    int n=A.size(),i=0, j=n-1, maxArea=0;
    while(i<j){
        int width = j-i;
        int height = min(A[j],A[i]);
        int area = width*height;
        maxArea = max(maxArea, area);
        if(A[i]<=A[j])
            i++;
        else
            j--;
    }
    return maxArea;
}

