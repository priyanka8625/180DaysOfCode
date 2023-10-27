class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0, j=i+1, n=numbers.size();
        vector<int> ans;
        for(int i=0; i<n-1; i++){
            int x = target - numbers[i]; //if target is 9, and i=2, then x will be 9-2=7, hence we'll try to find if 7 is present in numbers array. if yes then return i and x's index else go for the next i

            int start=i+1, end=n-1, mid=0;
            //binary search to find x
            while(start<=end){
                mid = start + (end-start)/2;
                if(numbers[mid]==x){
                    ans.push_back(i+1);
                    ans.push_back(mid+1);
                    return ans;
                }else if(numbers[mid]>x)
                    end = mid-1;
                else
                    start = mid + 1;
            }
        }
        return ans;
    }
};
