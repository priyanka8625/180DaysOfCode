class Solution
{
    public:
    // Function to check if Kth bit is set or not.
    bool checkKthBit(int n, int k)
    {
        //first right shift n by k times it will place the kth index bit from LSB at 0th index 
        //then & the resultant n with 1 to get 0 or 1 present at the 0th index
        return (n>>k)&1;
    }
};
