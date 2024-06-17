class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<bool> person(n, 0);
        return winner(person, n, 0, n, k);
    }
    int winner(vector<bool> &person, int n, int index, int person_left, int k){
        if(person_left == 1){
            //find the index in array which is holding 0 value
            for(int i=0; i<n; i++){
                if(person[i] == 0)
                    return i+1;
            }
        }
        //find the steps needed to move index to the next person to be killed in person vector
        int kill = (k-1)%person_left;
        //update index from current value by kill steps
        //and consider only 0 values while counting the steps
        while(kill--){
            index = (index+1)%n;
            while(person[index] == 1)
                index = (index+1)%n;//reach out to next zero before decreasing kill
        }
        //now kill index
        person[index] = 1;
        //move to next zero value from index to start the whole process again for that value
        while(person[index])
            index = (index+1)%n;
        return winner(person, n, index, person_left-1, k);
    }
};
