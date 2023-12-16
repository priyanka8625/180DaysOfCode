//Fibonacci Series up to Nth term
class Solution {
  public:
    vector<long long> Series(int N) {
        vector<long long> ans;
        if(N==1){
            ans.push_back(0);
            ans.push_back(1);
            return ans;
        }else{
            //take N to backward up untill N becomes 1
            ans = Series(N-1);
        }
        //if N != 1 then after else part, push_back the sum of previous two values from the 
        ans.push_back(ans[N-1] + ans[N-2]);
        return ans;
    }
    
};
