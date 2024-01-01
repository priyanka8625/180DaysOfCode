class Solution{
  public:
    // Function to find floor of x
    // n: size of vector
    // x: element whose floor is to find
    int findFloor(vector<long long> v, long long n, long long x){
        
        long long ans = -1;
        long long start = 0, end= n-1;
        while(start<=end){
            long long mid = start + (end-start)/2;
            if(v[mid] == x){
                ans = mid;
                break;
            }else if(v[mid] < x){
                ans = mid;
                start = mid + 1;
            }else{
                end = mid - 1;
            }
        }
        return ans;
    }
};
