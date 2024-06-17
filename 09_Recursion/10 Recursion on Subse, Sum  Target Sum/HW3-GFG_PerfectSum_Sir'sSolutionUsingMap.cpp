//sir's solution using map but still throws TLE 

class Solution {
    public:
    int perfectSum(int arr[], int N, int sum) {
        //sir's approach
        vector<int> temp(arr, arr + N);
        unordered_map<int, int> subsetSumsCount;
        calculateSubsetSums(temp, 0, N, 0, subsetSumsCount);
        return subsetSumsCount[sum];
    }
    void calculateSubsetSums(vector<int>& arr, int index, int n, int sum,
        unordered_map<int, int>& subsetSumsCount) {
        if (index == n) {
            subsetSumsCount[sum]++;
            return;
        }
        calculateSubsetSums(arr, index + 1, n, sum, subsetSumsCount);
        calculateSubsetSums(arr, index + 1, n, sum + arr[index],
        subsetSumsCount);
    }
};
