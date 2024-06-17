class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        int count = 0;
        for(int i=left; i<=right; i++){
            int end = words[i].length()-1;
            if(words[i][0]=='a' || words[i][0]=='e' || words[i][0]=='i' || words[i][0]=='o' || words[i][0]=='u')
                if(words[i][end]=='a' || words[i][end]=='e' || words[i][end]=='i' || words[i][end]=='o' || words[i][end]=='u')
                    count++;
        }
        return count;
    }
};
