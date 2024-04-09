class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int i=0, count=0, n=tickets.size();
        while(tickets[k] != 0){
            //reduce each ticket[i] ny 1 untill it becomes 0 and keep a count of it
            while(i<n){
                if(tickets[i]>0){
                    tickets[i]--;
                    count++;
                }
                if(tickets[k] == 0)
                    break;
                i++;
            }
            //after loop i will become i==n
            i=0;
        }
        return count;
    }
};