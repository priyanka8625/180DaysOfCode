class Solution {
  public:
    string toLower(string S) {
        convertToLower(S, S.length()-1);
        return S;
    }
    void convertToLower(string &str, int index){
        if(index==-1)
            return;
        if(str[index]>='A' && str[index]<='Z')
            str[index] = 'a' + str[index] - 'A';
        
        convertToLower(str, index-1);
    }
};

