class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        //algorithm:
        //1. drink all the given numBottles, at this step emptyBottles will be equal to numBottles
        //2. if numExchange is < emtyBottles count, then subtract numEchange from emptyBottles and fullBottles will be +1, numExchange becomes +1
        //3. continue step 2, unless emptyBottles become == numExchange, in this case drink all the fullBottles and return ans
        //4. if emptyBottles<numExchange then, drink the numBottles, make numBottles=0, emptyBottles+=numBottles and numExchange remains the same
        
        int emptyBottles=0, bottlesDrunk=0;
        while(emptyBottles >= numExchange || numBottles != 0){
            if(emptyBottles == 0){
                bottlesDrunk += numBottles;
                emptyBottles += numBottles;
                numBottles = 0;
            }
            if(emptyBottles == numExchange){
                emptyBottles =0;
                numExchange++;
                numBottles++;
                bottlesDrunk += numBottles;
                return bottlesDrunk;
            }else if(emptyBottles > numExchange){
                emptyBottles -= numExchange;
                numExchange ++;
                numBottles++;
            }else{
                bottlesDrunk += numBottles;
                emptyBottles += numBottles;
                numBottles = 0;
            }
        }
        return bottlesDrunk;
    }
};