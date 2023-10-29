class Solution{
  public:
    vector<int> maxPrefixes(int a[], int L[], int R[], int N, int Q) {
        vector<int> maxSum;
        for(int i=0; i<Q; i++){
            int maxPreffixSum= INT_MIN;
            int preffixSum=0;
            for(int j=L[i]; j<=R[i]; j++){
                preffixSum += a[j];
                maxPreffixSum = max(preffixSum, maxPreffixSum);
            }
            maxSum.push_back(maxPreffixSum);
        }
        return maxSum;
    }
};
