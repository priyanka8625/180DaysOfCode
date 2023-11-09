class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        vector<int> ans;
        for(int i=0; i<n; i++)
            arr[i]--;
        for(int i=0; i<n; i++)
            arr[arr[i]%n] += n;
        for(int i=0; i<n; i++){
            if(arr[i]/n == 2){
                ans.push_back(i+1);
                break;
            }
        }
        for(int i=0; i<n; i++){
            if(arr[i]/n == 0){
                ans.push_back(i+1);
                break;
            }
        }
        return ans;
    }
};
