//Add digits of a number unless the result is a single digit number LC

class Solution {
public:
    int addDigits(int num) {
        int sum=0, rem=0, ans=num;
        while(num>9){
            sum =0;
            while(num){
                rem = num%10;
                sum += rem;
                num/=10;
            }
            num = sum;
        }
        return num;
    }
};
