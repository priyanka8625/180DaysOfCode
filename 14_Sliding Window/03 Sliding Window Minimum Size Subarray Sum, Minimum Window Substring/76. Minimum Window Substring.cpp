class Solution {
public:
    string minWindow(string s, string t) {
        //using vector will make code more optimised instead of using a map
        //take a vector of 256 size which represents all of the ascii values 
        vector<int> mp(256);//chars needed in s
        int total=0;
        for(char ch: t){
            mp[ch]++;
            total++;
        }

        int start=0, end=0, ans=INT_MAX, index=-1, n=s.length();
        while(end<n){
            //decrease current char count from mp
            mp[s[end]]--;
            //if the count after decrement is 0 or more it means we decreased t's char
            if(mp[s[end]]>=0){
                total--;
            }

            //check if total==0 which means all chars of t are present in the substring
            while(total==0 && start<=end){
                //update the length of substring minimum
                if(end-start+1 < ans){
                    ans = end-start+1;
                    index = start;
                }
                //decrease window size and update count of start's char
                mp[s[start]]++;
                //after increasing the count, check if it was t's character
                if(mp[s[start]]>0){
                    //>0 means the count fof t's character is increased 
                    total++;
                }
                start++;
            }
            ///increase window size 
            end++;
        }
        if(index==-1)
            return "";

        string res="";
        for(int i=index; i<index+ans; i++){
            res += s[i];
        }
        return res;
    }
};