class Solution{
public:
    int rotationCount(long long R, long long D)
    {
        // code here
        int minRotate=0;
        while(R && D){
            int digit1 = R%10, digit2 = D%10;
            int cnt1 = abs(digit1 - digit2);//for anyone direction roation
            int cnt2 = 10 - cnt1;//for opposite direction rotation
            minRotate += min(cnt1, cnt2);
            R /= 10;
            D /= 10;
        }
        return minRotate;
    }
};