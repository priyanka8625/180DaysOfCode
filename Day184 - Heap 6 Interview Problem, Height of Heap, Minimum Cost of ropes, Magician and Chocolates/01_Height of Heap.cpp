class Solution{
public:
    int heapHeight(int N, int arr[]){
        // code here
        if(N==1)
            return 0;
        int height=0;
        while(N > 1){
            N /= 2;
            height++;
        }
        return height;
    }
};