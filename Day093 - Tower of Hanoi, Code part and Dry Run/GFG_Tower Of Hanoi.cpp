
class Solution{
    public:
    // You need to complete this function
    void tohCalc(int n, int src, int helper, int dest){
        if(n==1){
            cout<<"move disk "<<n<<" from rod "<<src<<" to rod "<<dest<<endl;
            return;
        }
        tohCalc(n-1, src, dest, helper);
        cout<<"move disk "<<n<<" from rod "<<src<<" to rod "<<dest<<endl;
        tohCalc(n-1, helper, src, dest);
    }
    // avoid space at the starting of the string in "move disk....."
    long long toh(int N, int from, int to, int aux) {
        tohCalc(N, from, aux, to);
        return pow(2,N)-1;
    }

};
