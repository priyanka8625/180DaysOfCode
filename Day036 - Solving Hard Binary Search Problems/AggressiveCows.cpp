
class Solution {
public:

    int solve(int n, int k, vector<int> &stalls) {
    
        int start, end, mid, ans=1, cowsCount, position;
        sort(stalls.begin(), stalls.end());
        
        start=1, end = stalls[n-1]-stalls[0];
        
        while(start<=end){
            mid = start + (end-start)/2;
            cowsCount = 1, position=stalls[0];  //the firstcow will always be placed at first position of stalls for every minimum distance between start and end
            for(int i=0; i<n; i++){
                if(position + mid <= stalls[i]){
                    cowsCount++;
                    position = stalls[i]; //make position ready from stalls[i] to place next cow
                }
            }
            if(cowsCount >= k){  //means we can place all the cows at the mid distance
                ans = mid;
                start = mid + 1;
            }else //means we can't place all the cows at the mid distance
                end = mid - 1;
        }
        return ans;
    }
};
