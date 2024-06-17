/**
 * @input A : Integer
 * @input B : Integer
 * 
 * @Output Integer
 */
 int min(int a, int b){
     if(a<b)
        return a;
    else
        return b;
 }
int solve(int A, int B) {
    int count=0;
    //for right bottom path
    count+= min(8-A, 8-B);
    //for left bottom path
    count+= min(8-A, B-1);
    //for right upper path
    count+= min(A-1, 8-B);
    //for left upper path
    count+= min(A-1, B-1);
    return count;
}

