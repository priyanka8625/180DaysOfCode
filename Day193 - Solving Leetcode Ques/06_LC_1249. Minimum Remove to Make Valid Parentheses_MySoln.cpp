class Solution {
public:
    string minRemoveToMakeValid(string s) {
        //first we'll create a stack and push only the (, when ) is encountered pop the top of stack
        //if for any ), the stack is empty means it's an invalid ) so dont add it into result
        //if after the loop you find stack not empty which means there are missing )'s for some ( brackets, in that case simply remove stack.size() no. of ( from the result
        string res="";
        stack<char> brackets;
        for(char ch : s){
            //1. it's a (
            if(ch == '('){
                brackets.push(ch);
                res += ch;
            }
            //2. ) and stack not empty
            else if(ch == ')' && (!brackets.empty())){
                brackets.pop();
                res += ch;
            }
            else if(ch >= 'a' && ch<='z'){
                res += ch;
            }
        }
        //after loop if stack is empty, the string is valid return it 
        //else, we need to remove some opening (
        if(brackets.size()>0){
            int n = brackets.size(), i=res.length()-1;
            while(n>0 && i>=0){
                if(res[i] == '('){
                    n--;
                    res.erase(i, 1);//remove one ( from index = i 
                }else //update the index only when you didn't update the string 
                    i--;
            }
        }
        return res;
    }
};