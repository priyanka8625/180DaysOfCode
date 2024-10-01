class Solution 
{
    public:
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        // your code here
        sort(arr, arr+n, [&](Job &a, Job &b){
            return a.profit > b.profit;
        });
        
        int max_dead = 0;
        for(int i=0; i<n; i++){
            max_dead = max(max_dead, arr[i].dead);
        }
        vector<int> parent(max_dead+1);
        for(int i=0; i<=max_dead; i++)
            parent[i] = i;
        
        int ans=0, count=0;
        for(int i=0; i<n; i++){
            int profit = arr[i].profit;
            int j = arr[i].dead;
            
            //find the next empty slot fr the dead line between 1 -> dead slots
            int slot = find(arr[i].dead, parent);
            
            if(slot>=1){
                parent[slot] = slot-1;//now slot is taken and it will point to the next empty slot
                ans += profit;
                count++;
            }
        }
        return {count, ans};
    } 
    int find(int num, vector<int>& parent){
        if(num == parent[num])
            return num;
        return parent[num] = find(parent[num], parent);
    }
};