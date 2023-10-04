//leetcode problem 
class Solution {
public:
    bool isUgly(int n) {
        int res = n;
        if(n==1)
            return 1;
        if(n<=0)
            return 0;

        while(res>=0){
            if(res==1)        // when no becomes 1 after contantly dividing it
                return 1;
            else if(res%2==0)
                res/=2;
            else if(res%3==0)
                res/=3;
            else if(res%5==0)
                res/=5;
            else
                return 0;
        }
        return 1;
    }
};
