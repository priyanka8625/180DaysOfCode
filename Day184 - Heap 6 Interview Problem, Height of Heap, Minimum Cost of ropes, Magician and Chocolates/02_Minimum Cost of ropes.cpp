class Solution
{
    public:
    //Function to return the minimum cost of connecting the ropes.
    long long minCost(long long arr[], long long n) {
        // Your code here
        //create a minheap
        priority_queue<long long, vector<long long>, greater<long long>> pq;
        long long sum=0;
        for(int i=0; i<n; i++){
            pq.push(arr[i]);
        }
        while(pq.size()>1){
            long long first = pq.top();
            pq.pop();
            long long second = pq.top();
            pq.pop();
            sum += first+second;//add rope sums of each iteration
            pq.push(first+second);//add the current rope sum into pq
        }
        return sum;
    }
};