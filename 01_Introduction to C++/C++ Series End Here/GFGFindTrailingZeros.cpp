class Solution
{
public:
    int trailingZeroes(int N)
    {
        int count=0;
        
        int division = N/5;
        count = division;
        while(division >= 5){
            division/=5;
            count += division;
        }
        return count;
    }
};
