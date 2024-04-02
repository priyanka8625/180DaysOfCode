class Solution{
    public:
    vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m) {
        // your code here
        vector<int> ans;
        for(int i=0; i<n; i++)
            ans.push_back(a[i]);
        for(int i=0; i<m; i++)
            ans.push_back(b[i]);
        
        //apply heapify on this array to convert the array into maxheap in just O(n+m) time 
        //we can also use priority queue for the same but it takes O(n+m * log n+m)
        n= n+m;
        for(int i=n/2-1; i>=0; i--){
            heapify(ans, i, n);
        }
        return ans;
    }
    void heapify(vector<int>& ans, int index, int n){
        int largest = index;
        int left = 2*index+1;
        int right = 2*index+2;
        //take max of both the childs
        if(left<n && ans[left]>ans[largest])
            largest = left;
        if(right<n && ans[right]>ans[largest])
            largest = right;
        if(largest != index){
            swap(ans[largest], ans[index]);
            heapify(ans, largest, n);
        }
    }
};