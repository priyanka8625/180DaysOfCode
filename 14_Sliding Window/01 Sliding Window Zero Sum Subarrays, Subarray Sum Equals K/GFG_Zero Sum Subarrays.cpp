class Solution{
public:
    //Function to count subarrays with sum equal to 0.
    long long int findSubarray(vector<long long int> &arr, int n ) {
        //code here
        long long int total=0;//total to store whose sum is zero
        unordered_map<long long int, long long int> mp; //to store prefix and its count
        //dry run folln code for better understanding 
        mp[0] = 1;//initially the array sum is always zero 
        
        //now find the prefix sum upto each index of array 
        //prefix sum means the sum from array's 0th index upto i (inclusive)
        // and if this prefix sum founds to be reoccured at any index then we can say that there is a subarray
        // whose sum is zero and thst's why the prefix sum got repeated
        //that's why we use a map 
        //and the first entry in map is zero because it may happen that the prefixSUm becomes
        //zero at any index in array which means that 0th index to i sum is equal to 0
        //so to get that count we inserted a 0 into map
        
        long long int prefixSum=0;
        for(int i=0; i<n; i++){
            prefixSum += arr[i];
            if(mp[prefixSum]!=0){
                //add the count of occurance of this prefix sum into total
                //this indicates that there were count no. of subarrays whose sum is zero 
                //that's why the previous prefix sum has remained the same at current index
                total += mp[prefixSum];
            }
            //increase the occurance of the prefixSum 
            mp[prefixSum]++;
        }
        return total;
    }
};
