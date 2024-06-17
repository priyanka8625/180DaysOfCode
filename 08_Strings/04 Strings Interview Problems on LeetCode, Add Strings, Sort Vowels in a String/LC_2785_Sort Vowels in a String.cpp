class Solution {
public:
    string sortVowels(string s) {
        
        vector<int> lower(26,0);
        vector<int> upper(26,0);

        for(int i=0; i<s.size();i++){
            if(s[i]=='a' || s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                lower[s[i]-'a']++;//increase the count of that vowel
                s[i]='#';//to make it easy while refilling thses positions with sorted vowels
            }
            if(s[i]=='A' || s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
                upper[s[i]-'A']++;//increase the count of that vowel
                s[i]='#';//to make it easy while refilling thses positions with sorted vowels
            }
        }
        string ans;
        for(int i=0; i<26; i++){//store upper case letters in sorted order in ans
            char c = i+'A';
            while(upper[i]){
                ans += c;
                upper[i]--;
            }
        }
        for(int i=0; i<26; i++){//store upper case letters in sorted order in ans
            char c = i+'a';
            while(lower[i]){
                ans += c;
                lower[i]--;
            }
        }
        int first=0, second=0;
        while(second < ans.size()){
            if(s[first]=='#'){
                s[first] = ans[second];
                second++;//ans pointer
            }
            first++;//original string pointer
        }
        return s;
    }
};
