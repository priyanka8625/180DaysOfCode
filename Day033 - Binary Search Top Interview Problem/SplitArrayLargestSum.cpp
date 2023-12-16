class Solution {
  public:
    int splitArray(int arr[] ,int N, int K) {
        int start=0, end=0, ans=0, mid=0, subarrayCount=1, sumOfSubEles=0;
        
        for(int i=0; i<N; i++){
            end += arr[i];
            if(arr[i]>start)
                start = arr[i];
        }
        
        while(start<=end){
            mid = start + (end-start)/2;
            subarrayCount = 1;
            sumOfSubEles = 0;
            for(int i=0; i<N; i++){
                sumOfSubEles += arr[i];
                if(sumOfSubEles>mid){
                    subarrayCount++;
                    sumOfSubEles = arr[i];
                }
            }
            if(subarrayCount <= K){
                ans = mid;
                end = mid - 1;
            }else
                start = mid + 1;
        }
        return ans;
    }
};
