class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int longestLength = -1;
        for(int i=0; i<s.length()-1; i++){
            for(int j=i+1; j<s.length(); j++){
                if(s[i] == s[j]){
                    longestLength = max(longestLength, (j-i-1));
                }
            }
        }
        return longestLength;
    }
};
