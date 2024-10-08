class Solution {
  public:
    // Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int w, Item arr[], int n) {
        // Your code here
        double maxVal=0;
        //sort the items by value/weight so that we get to know how much value for one unit
        sort(arr, arr+n, [&](struct Item i1, struct Item i2){
            // muliply instead of dividing the value/weight of respective items
            //because divide can return 2.67 and 2.66, in either cases the value 
            //will be rounded to 2 and hence the order can get disrupt
            return (i1.value*i2.weight) > (i2.value*i1.weight);
        });
        
        //now take the items which have max value for single unit so that get maximum profit in long run
        for(int i=0; i<n && w; i++){
            if(arr[i].weight <= w){
                w -= arr[i].weight;
                maxVal += arr[i].value;
            }else{
                maxVal += w*((double)arr[i].value/arr[i].weight);//calculate remaining weight * value for single unit to get the value for w units
                w = 0;
            }
        }
        return maxVal;
    }
};
