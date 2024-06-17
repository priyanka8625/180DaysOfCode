int Solution::solve(vector<int> &A, int B) {
    priority_queue<int> pq;
    for(int i:A)
        pq.push(i);
    
    int profit=0;
    while(B-- && !pq.empty()){
        int seat = pq.top();
        pq.pop();
        pq.push(seat-1);
        profit += seat;
    }
    return profit;
}
