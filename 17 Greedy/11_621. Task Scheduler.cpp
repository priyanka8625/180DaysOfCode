class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        //calclate the freq of each character
        //and find the highest freq among all chars
        vector<int> freq(26, 0);
        int count=0;
        for(char ch:tasks){
            freq[ch-'A']++;
            count = max(count, freq[ch-'A']);
        }
        int ans = (count-1)*(n+1), ch=0;
        for(int i=0; i<26; i++){
            if(count == freq[i])
                ch++;
        }
        ans += ch;
        return max(ans, (int)tasks.size());
    }
};