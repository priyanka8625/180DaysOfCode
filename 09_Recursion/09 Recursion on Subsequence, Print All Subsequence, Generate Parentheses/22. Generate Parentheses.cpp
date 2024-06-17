class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string temp;
        parentheses(n, 0, 0, ans, temp);
        return ans;
    }
    void parentheses(int n, int left, int right, vector<string> &ans, string &temp){
        if(left == n && right == n){
            ans.push_back(temp);
            return;
        }
        //add left parentheses
        if(left<n){
            temp.push_back('(');
            parentheses(n, left+1, right, ans, temp);
            temp.pop_back();
        }
        //add right parentheses
        if(right<left){
            temp.push_back(')');
            parentheses(n, left, right+1, ans, temp);
            temp.pop_back();
        }
    }
};
