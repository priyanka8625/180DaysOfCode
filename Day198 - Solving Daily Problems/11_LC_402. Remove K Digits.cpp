class Solution {
public:
    string removeKdigits(string num, int k) {
        // Stack to store the digits
        stack<char> numStack;
        
        // Iterating through each digit in the number
        for (char digit : num) {
            // While there are remaining removals (k) and the stack is not empty and the current digit is smaller than the top of the stack
            while (k > 0 && !numStack.empty() && digit < numStack.top()) {
                // Remove digits from the stack
                numStack.pop();
                k--;
            }
            if(numStack.empty() && digit=='0')
                continue;
            // Push the current digit to the stack
            numStack.push(digit);
        }
        
        // After iterating through the number, if there are still remaining removals, remove digits from the stack
        while (k > 0 && !numStack.empty()) {
            numStack.pop();
            k--;
        }

        // Construct the result string by popping digits from the stack
        string temp = "";
        while (!numStack.empty()) {
            temp.push_back(numStack.top());
            numStack.pop();
        }
        // Reverse the result string to get the correct order
        reverse(temp.begin(), temp.end());

        // If the result is empty, return "0"
        if (temp.size() == 0)
            temp.push_back('0');
        return temp;
    }
};