void lowerToUpper(string &str, int index){
    if(index==-1)
        return;
    str[index] = 'A' + str[index] - 'a';
    lowerToUpper(str, index-1);
}

string to_upper(string str){
    lowerToUpper(str, str.length()-1);
    return str;
}
