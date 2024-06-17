class Solution{
  public:
    int missingNumber(vector<int>& array, int n) {
        int arraySum=0, allSum=0;
        for(int i=0; i<n-1; i++){
            arraySum += array[i];
        }
        allSum = n*(n+1)/2;
        return allSum - arraySum;
    }
}
