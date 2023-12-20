class Solution
{
public:
    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int> ans;
        printSubsetSums(arr, 0, arr.size(), 0, ans);
        return ans;
    }
    void printSubsetSums(vector<int> &arr, int index, int n, int sum, vector<int> &ans){
        if(index == n){
            ans.push_back(sum);
            return;
        }
        //don't include
        printSubsetSums(arr, index+1, n, sum, ans);
        //include index value
        printSubsetSums(arr, index+1, n, sum+arr[index], ans);
    }
};
