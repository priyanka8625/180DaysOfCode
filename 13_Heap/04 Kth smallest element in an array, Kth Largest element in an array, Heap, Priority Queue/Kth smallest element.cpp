
class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        //code here
        priority_queue<int> elements;
        for(int i=l; i<k; i++)
            elements.push(arr[i]);
            
        for(int i=k; i<=r; i++){
            if(arr[i] < elements.top()){
                elements.pop();
                elements.push(arr[i]);
            }
        }
        
        return elements.top();
        
    }
};