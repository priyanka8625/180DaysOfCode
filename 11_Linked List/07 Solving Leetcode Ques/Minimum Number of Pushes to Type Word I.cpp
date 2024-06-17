class Solution {
public:
    int minimumPushes(string word) {
        map<int, string> keys;
        int i=0, n=word.length(), index=2;
        while(i<n){
            // map each letter to indices of keys starting from 2 to 9
            keys[index++].push_back(word[i]);      
            if(index == 10)
                index = 2;
            i++;
        }
        //then count the sum of all pushes needed for keys from 2 to 9
        int sum=0;
        for(auto& [key,value] : keys){
            for(int i=0; i<value.length(); i++)
                sum += i+1;
        }
        return sum;
    }
};