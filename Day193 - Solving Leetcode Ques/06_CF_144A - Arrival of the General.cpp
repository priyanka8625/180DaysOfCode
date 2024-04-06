// 4
// 33 44 11 22
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0; i<n; i++)
        cin>>nums[i];
    int minIndex=-1, min=INT_MAX, max=INT_MIN, maxIndex=-1;
    for(int i=0; i<n; i++){
        //get last occurance of min ele
        if(nums[i]<=min){
            min = nums[i];
            minIndex = i;
        }
        //get the first occurance of max ele
        if(nums[i]>max){
            max = nums[i];
            maxIndex = i;
        }
    }
    //the min number of seconds will be, if we find the pattern from given examples
    //if minIndex <= maxIndex, ans = ((n-1)-minIndex) + (maxIndex-0) -1
    //else dont -1 from minIndex swaps and maxIndex swaps
    int ans = ((n-1)-minIndex) + (maxIndex);
    if(minIndex<=maxIndex)
        ans -= 1;
    cout<<ans<<endl;
    return 0;
}