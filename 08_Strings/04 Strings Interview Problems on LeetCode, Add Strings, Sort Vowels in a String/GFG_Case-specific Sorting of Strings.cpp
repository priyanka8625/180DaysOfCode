class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string str, int n)
    {
        vector<int> upper(26, 0);
        vector<int> lower(26, 0);
        for(int i=0; i<n; i++){
            //add upper case char count in upper vector and denote them with # in original str
            if(str[i]>='A' && str[i]<='Z'){
                upper[str[i]-'A']++;
                str[i]='#';
            }
            //add lower case char count in lower vector and denote them with $ in original str
            if(str[i]>='a' && str[i]<='z'){
                lower[str[i]-'a']++;
                str[i]='$';
            }
        }
        string upperSorted, lowerSorted;
        //now sort upper and lower seperately
        for(int i=0; i<26; i++){
            char c = 'A' + i;//char present at ith index
            while(upper[i]){
                upperSorted += c;
                upper[i]--;
            }
        }
        for(int i=0; i<26; i++){
            char c = 'a' + i;//char present at ith index
            while(lower[i]){
                lowerSorted += c;
                lower[i]--;
            }
        }
        
        int Lindex=0, Uindex=0;
        //then add both of thses sorted strings into original string
        for(int i=0; i<n; i++){
            if(str[i] == '$'){
                str[i] = lowerSorted[Lindex];
                Lindex++;
            }
            if(str[i] == '#'){
                str[i] = upperSorted[Uindex];
                Uindex++;
            }
        }
        return str;
    }
};
