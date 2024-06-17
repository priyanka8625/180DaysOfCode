class Solution {
public:
    int countKeyChanges(string s) {
        int count = 0;
        for(int i=0; i<s.length()-1; i++){
            if(tolower(s[i]) != tolower(s[i+1])) //two chars are unique
                count++;
        }
        return count;
    }
};