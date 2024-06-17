
class Solution{   
public:
    bool isProduct(int arr[], int n, long long x) {
        sort(arr, arr+n);
        int start=0, end=n-1;
        while(start<end){
            long long mul = (arr[start]*arr[end]);
            if(mul==x)
                return 1;
            else if(mul<x)
                start++;
            else
                end--;
        }
        return 0;
    }
};

