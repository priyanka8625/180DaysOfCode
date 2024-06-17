// THROWS TLE

class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        long long sum=0;
        //find all the min elements of contigous of subarrays
        for(int i=0; i<n; i++){
            int minEle = INT_MAX;
            // outer loop indicates the index to start forming contigous subarrays
            for(int j=i; j<n; j++){
                //inner for loop indicates the new element to be added to the next subarray
                minEle = min(minEle, arr[j]);
                sum += minEle; //add it to the sum 
            }
        }
        
        return sum%1000000007;
    }
   
};