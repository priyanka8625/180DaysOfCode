class Solution {
public:
    string convert(string s, int numRows) {
        //create vector of strings 
        vector<string> ans(numRows);
        int index = 0, i=0, length=s.length();
        //we'll form a zigzag pattern using rows and columns of vector
        while(index < length){
            //add increasing row values into ans vector
            while(i<numRows && index<length){
                ans[i].push_back(s[index]);
                index++; //move to next char
                i++; // move to next row 
            }

            //after loop i becomes equal to numRows, so make it equal to numRows-2 first
            //to form the next diagonal pattern in string
            i = numRows-1;
            //check for the edge condition that if numrows is 1 and 
            //in above stmt i become 1-1 0, if you directly execute the 2nd loop then 
            // it won't get executed and the program will run infinitely
            if(i == 0 && index<length){
                ans[i].push_back(s[index]);
                index++;
            }

            while((--i)>=0 && index < length){
                ans[i].push_back(s[index]);
                index++;
            }
            //after loop i will be equal to -1 so make it equal to index 1 
            // as we already inserted a character in the diagonal pattern for index=0
            i = i+2;//(-1 + 2)
        }

        //now we have a zigzag pattern formed in vector, convert it into string
        index = 0;
        string result="";
        for(i=0; i<numRows; i++){
            result += ans[i];
        }
        return result;
    }
};