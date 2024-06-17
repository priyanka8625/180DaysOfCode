class Solution{
    public:
    long long sumBetweenTwoKth( long long A[], long long N, long long K1, long long K2)
    {
        // Your code goes here
        priority_queue<long long> p1;
        priority_queue<long long> p2;
        
        //we'll find K1 smallest elements and K2-1 smallest elements from A
        //if we do so, K1 can <= K2 hence if we subtract the sum of K1 elements from the sum of K2 elements
        //we'll get the remaining elements i.e. K1+1 smallest to K2-1'th smallest sum as result
        //it's just like set difference we do in DMS 
        
        
        //find k1 smallest elements from A and insert into p1
        for(long long i=0; i<K1; i++)
            p1.push(A[i]);
        for(long long i=K1; i<N; i++){
            if(A[i] < p1.top()){
                p1.pop();
                p1.push(A[i]);
            }
        }
        
        //find k2-1 smallest elements from A and insert into p2
        for(long long i=0; i<K2-1; i++){
            p2.push(A[i]);
        }
        for(long long i=K2-1; i<N; i++){
            if(A[i] < p2.top()){
                p2.pop();
                p2.push(A[i]);
            }
        }
        
        //now find the sum of K1 and K2-1 smallest elements of A 
        //and subtract them to get the sum of elements between k1 and k2'th smallest ele
        long long sum1=0, sum2=0;
        while(!p1.empty()){
            sum1 += p1.top();
            p1.pop();
        }
        while(!p2.empty()){
            sum2 += p2.top();
            p2.pop();
        }
        
        return sum2-sum1;
    }
};
