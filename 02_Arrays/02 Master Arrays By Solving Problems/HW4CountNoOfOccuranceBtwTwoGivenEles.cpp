
class Solution{
    public:
    int getCount(int arr[], int n, int num1, int num2)
    {
        int leftNum1=n, rightNum2=-1, i=0, j=n-1;
        while(i<n && j>=0){
            if(arr[i]==num1 && leftNum1>i){
                leftNum1 = i;
            }
            if(arr[j] == num2 && rightNum2<j){
                rightNum2 = j;
            }
            i++;
            j--;
        }
        if(leftNum1==n && rightNum2==-1) //num1 and num2 not found
            return 0;
        if(leftNum1 == rightNum2) //num1 and num2 are same
            return 0;
        return (rightNum2 - leftNum1)-1;
    }
};
