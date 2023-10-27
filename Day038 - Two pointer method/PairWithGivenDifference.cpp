int Solution::solve(vector<int> &A, int B) {
    int n = A.size();
    sort(A.begin(), A.end());
    int start=0, end=1;
    if(B<0)
        B*=-1;//take abs(B), as we're evaluating the diff in +ve nos only
    while(end<n){
        int diff = A[end]-A[start];
        //if diff is == target
        if(diff == B)
            return 1;
        else if(diff < B)//difference is < B, so increase end to increase the diff
            end++;
        else    //means diff > target, so we need to decrease the diff by decreasing the start
            start++; 
        if(start == end)
            end++; //if startand end== single ele in A then move end ahead to take the difference between two different nos   
    }
    return 0;
}

