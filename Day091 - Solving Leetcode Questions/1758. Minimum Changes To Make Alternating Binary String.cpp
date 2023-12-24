class Solution {
public:
    int minOperations(string s) {
        int n = s.size();
        int countOfZeroOne=0, countOfOneZero=0;
        //a binary string with alternating bits will either look like 
        //1] 01010101...
        //2] 10101010... anyone of this only 
        //compare given string with both of the cases and return the min of both of them 
        //to make s = alternating string
        for(int index=0; index<n; index++){
            //for first case when index is even there must be a zero and for odd it should be 1 to make s an alternating string
            if(index%2 == 0 && s[index]=='1'){
                //it should be zero, so increment count of Zero-One 
                countOfZeroOne++;
            }else if(index%2 != 0 && s[index]=='0'){
                //it should be one for odd indices, increment count of Zero-One
                countOfZeroOne++;
            }
            //check the same index for One-Zero 10101... case
            //for even indices = 1 and for odd it should be a 0
            if(index%2 == 0 && s[index]=='0'){
                //it should be 1 in this case, so increment count of One-Zero
                countOfOneZero++;
            }else if(index%2 != 0 && s[index]=='1'){
                countOfOneZero++;
            }
        }
        return min(countOfZeroOne, countOfOneZero);
    }
};
