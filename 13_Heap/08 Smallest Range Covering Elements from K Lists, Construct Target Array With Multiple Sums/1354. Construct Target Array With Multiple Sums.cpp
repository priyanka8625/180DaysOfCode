class Solution {
public:
    bool isPossible(vector<int>& target) {
        //we'll keep a maxheap to get the maxele from the given target and 
        //subtract the remaining elements of target from it to get the new element
        //we'll continue this unless we get the max of pq as 1
        //we'll go in reverse order 
        //i.e. if we can get an array of all 1's through the given target then return 1
        //else 0
        priority_queue<long long> pq;
        long long sum=0;
        for(int i=0; i<target.size(); i++){
            pq.push(target[i]);
            sum += target[i];
        }
        long long remSum, maxEle, element;
        while(pq.top() != 1){
            //get the current max 
            maxEle = pq.top();
            pq.pop();

            //get the remaning sum of the current step 
            remSum = sum - maxEle;
            //check the case where we can't get the array of all 1's
            if(remSum <=0 || remSum>=maxEle)
                return 0;
            //now get the element from prevStep that was added into the rem to get the maxEle 
            // element = maxEle - remSum;
            element = maxEle % remSum;//to avoid multiple loops of subtraction when remSum has constant value
            //when element becomes 0 and remSum==1, ans is possible 
            if(element == 0){
                if(remSum!=1)
                    return 0;
                else
                    return 1;
            }

            sum = remSum + element;
            
            //insert this new element got after subtraction into pq
            pq.push(element);
        }
        return 1;
    }
};