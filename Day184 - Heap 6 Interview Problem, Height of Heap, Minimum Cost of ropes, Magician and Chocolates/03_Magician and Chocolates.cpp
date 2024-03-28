int Solution::nchoc(int A, vector<int> &B) {
    priority_queue<int> pq;
    for(int i=0; i<B.size(); i++)
        pq.push(B[i]);
    
    long long maxChocos=0;
    while(A--){
        long long chocolates = pq.top();
        pq.pop();
        maxChocos += chocolates;
        pq.push(chocolates/2);
    }
    return maxChocos%1000000007;
}
