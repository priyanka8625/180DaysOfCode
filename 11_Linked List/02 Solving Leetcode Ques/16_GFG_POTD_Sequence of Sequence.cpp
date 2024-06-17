class Solution{
public:
    int generate(int a, int m, int n){
        int total = 0;
        int lim = m>>n;
        
        while(a <= lim){
            if(n)
                total += generate(a*2,m,n-1);
            else
                total++;
            a++;
        }
        return total;
    }
    int numberSequence(int m, int n){
        return generate(1,m,n-1);
    }
};