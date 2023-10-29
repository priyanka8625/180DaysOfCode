int Solution::removeElement(vector<int> &A, int B) {
    int length = 0, n = A.size();
    int i=0, j=0;
    while(j<A.size()){
        if(A[j]==B){
            j++;
            continue;
        }
        swap(A[i], A[j]);
        i++;
        j++;
        length++;
    }
    return length;
}

