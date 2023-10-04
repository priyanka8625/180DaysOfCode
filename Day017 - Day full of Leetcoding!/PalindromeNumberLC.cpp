//Palindrome number LC

class Solution {
public:
    bool isPalindrome(int x) {
        int temp=x, rev=0, rem;
        if(x<0)
            return false;

        while(temp!=0){
            rem = temp%10;
            if(rev>INT_MAX/10) //if number exceeds the limit
                return 0;
            rev = rev*10 + rem;
            temp/=10;
        }
        if(rev==x)
            return true;
        return false;
    }
};
