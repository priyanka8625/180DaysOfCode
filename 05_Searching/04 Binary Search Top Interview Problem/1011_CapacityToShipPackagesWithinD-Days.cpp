class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int start=0, end = 0, mid=0, ans=-1, n=weights.size();
        
        // find max and sum of weights
        for(int i=0; i<n;i++){
            end += weights[i];
            if(weights[i]>start)
                start = weights[i];
        }
        
        int shippedPackages=0, daysCount=1;
        while(start<=end){
            mid = start + (end-start)/2;
            shippedPackages = 0;
            daysCount = 1;
            for(int i=0; i<n; i++){
                shippedPackages += weights[i];
                if(shippedPackages>mid){
                    daysCount++;
                    shippedPackages = weights[i];
                }
            }
            if(daysCount<=days){
                ans = mid;
                end = mid - 1;
            }else
                start = mid+1;
        }
        return ans;
    }
};
