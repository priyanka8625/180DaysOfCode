class Solution
{
    //dry run below code to better understand
    //example:
    //  2 3 5 7 8  9 10 11 81 
    // [         ][          ]
    //   maxheap     minheap
    public:
    priority_queue<int> leftmaxheap;
    priority_queue<int, vector<int>, greater<int>> rightminheap;
    //Function to insert heap.
    void insertHeap(int &x)
    {
        //first element insertion
        if(leftmaxheap.size()==0){
            leftmaxheap.push(x);
            return;
        }
        if(x>leftmaxheap.top())
            rightminheap.push(x);
        else
            leftmaxheap.push(x);
        
        balanceHeaps();
    }
    
    //Function to balance heaps.
    void balanceHeaps()
    {
        // minheap's size should not be greater than maxheap
        if(rightminheap.size()>leftmaxheap.size()){
            leftmaxheap.push(rightminheap.top());
            rightminheap.pop();
        }else if(leftmaxheap.size() > rightminheap.size()+1){
            rightminheap.push(leftmaxheap.top());
            leftmaxheap.pop();
        }
    }
    
    //Function to return Median.
    double getMedian()
    {
        if(leftmaxheap.size()>rightminheap.size())
            return leftmaxheap.top();
        
        double ans=0;
        ans = (leftmaxheap.top()+rightminheap.top())/2;
        return ans;
    }
};