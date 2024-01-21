class Solution {
public:
    int minimumPushes(string word) {
        vector<int> freq(26, 0);
        int n = word.length();
        //count frequecy of each character in word first
        for(int i=0; i<n; i++){
            freq[word[i]-'a']++;
        }
        //sort freq vector in decresing order, so that the char with high no. of occurance will be placed first on keys
        sort(freq.rbegin(), freq.rend());
        
        //create a vector which will indicate 8 keys from 2-9 and each char will be placed at 1st location of all the 8 keys, then 2nd position of 8 keys, then 3rd position and so on...
        vector<int> position(8, 8);
        int sum = 0;
        //variable i -> track freq vector
        // j -> index of char on the 8 keys
        for(int i=0, j=0; i<26; i++){
            //pushes of a character = it's position on any of the 8 keys * count of it's occurance
            if(freq[i] != 0){
                int pushes = freq[i] * (j+1);
                sum += pushes;
                //decrease position[j] each time, you use it so that when position[j] becomes 0 from 8, it means that jth position is filled with characters on all the 8 keys
                if(--position[j]==0)
                    j++;
            }
        }
        return sum;
    }
};
