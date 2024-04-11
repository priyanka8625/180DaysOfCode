
class Solution{
    public:
    // function to convert a given Gray equivalent n to Binary equivalent.
    int grayToBinary(int n)
    {
        
        // Your code here
        //algorithm:
        //find the binary of given n
        //find the decimal whose gray code is above found binary number
        //1. convert n -> binary
        //2. convert binary -> gray
        //3. convert gray -> decimal
        int ans=0;
        string binary="", gray="";
        binary = decToBin(n);
        gray = binToGray(binary);
        ans = grayToDec(gray);
        return ans;
    }
    string decToBin(int n){
        if(n == 0)
            return "0";
        string binary = "";
        while(n){
            binary = ((char)((n&1)+'0')) + binary;
            n>>=1;
        }
        return binary;
    }
    string binToGray(string binary){
        string gray = binary;
        int index=0;
        for(int i=1; i<binary.length(); i++){
            int bit = (gray[index]-'0')^(binary[i]-'0'); 
            gray[++index] = (char)(bit+'0');
        }
        return gray;
    }
    int grayToDec(string gray){
        int ans=0;
        int power = 1;
        for(int i=gray.length()-1; i>=0; i--){
            int digit = power*(gray[i]-'0');
            ans += digit;
            power*=2;
        }
        return ans;
    }
};

//steps to convert binary into gray code
// n = 10  —> binary representation = 1010

// Gray code: 1 _ _ _  [ from point 3 ]
// Gray code: 1 1 _ _  [ from point 4  ( 1^0 = 1 ) ]
// Gray code: 1 1 0 _  [ from point 4  ( 1^1 = 0 ) ]
// Gray code: 1 1 0 0  [ from point 4  ( 0^0 = 0 ) ]

// 1100 —> 12 (in decimal)