// Leap year GFG 

int isLeap(int N){
        return (N%400==0 || (N%4==0 && N%100!=0));
}
