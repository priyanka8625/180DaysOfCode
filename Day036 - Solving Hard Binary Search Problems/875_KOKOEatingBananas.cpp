class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size(), start=0, end=0, mid=0, totalHrs=0, ans=0;
        long long sum=0;
        for(int i=0; i<n;i++){
            sum += piles[i];
            if(piles[i]>end)
                end = piles[i];
        }
        start = sum/h; //minimum banas to be eaten in one hr, instead of starting from 1,2,.. as in some cases 1 or 2 bananas/hr can't make us finish all the banas in h hrs
        if(start==0)
        	start = 1; //to avoid the condition of divide by zero exception while dividing ny mid to piles[i] in for loop
        	
		while(start<=end){
            mid = start + (end-start)/2;
            totalHrs = 0;
            for(int i=0; i<n; i++){
                totalHrs += piles[i]/mid; //add round of /mid to get the hrs to eat piles[i] bananas
                if(piles[i]%mid) //if piles[i]/mid returns a decimal division then make total+=1
                    totalHrs++;
            }
            if(totalHrs > h) //require more time to eat all bananas so increase the speed 
                start = mid + 1;
            else{ //all banas can be finished in <=h hrs hence decrease the speedto find minimum bananas/hr
                end = mid - 1;
                ans = mid;
            }
        }
        return ans;
    }
};
