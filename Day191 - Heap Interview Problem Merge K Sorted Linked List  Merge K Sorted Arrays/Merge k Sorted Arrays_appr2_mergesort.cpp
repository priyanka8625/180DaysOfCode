
class Solution
{
    public:
    //Function to merge k sorted arrays.
    vector<int> mergeKArrays(vector<vector<int>> arr, int K)
    {
        //code here
        vector<int> ans;
        for(int i=0; i<K; i++){
            for(int j=0; j<K; j++){
                ans.push_back(arr[i][j]);
            }
        }
        mergesort(ans, 0, ans.size()-1, K, K);
        return ans;
    }
    void mergesort(vector<int>& ans, int start, int end, int portion, int K){
        if(portion<2)
            return;
        
        //divide the array based on the k sorted portions and then merge these sorted portions
        int mid = start + (portion/2)*K - 1;
        
        mergesort(ans, start, mid, portion/2, K);
        mergesort(ans, mid+1, end, portion - portion/2, K);
        merge(ans, start, mid, end);
        
    }
    void merge(vector<int>& ans, int start, int mid, int end){
        vector<int> temp(end-start+1);
        int index=0, left=start, right=mid+1;
        while(left<=mid && right<=end){
            if(ans[left]<=ans[right]){
                temp[index] = ans[left];
                left++;
                index++;
            }else{
                temp[index] = ans[right];
                right++;
                index++;
            }
        }
        while(left<=mid){
            temp[index] = ans[left];
            left++;
            index++;
        }
        while(right<=end){
            temp[index] = ans[right];
            right++;
            index++;
        }
        index=0;
        while(start<=end){
            ans[start] = temp[index];
            index++;
            start++;
        }
    }
};