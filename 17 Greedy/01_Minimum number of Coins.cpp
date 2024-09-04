class Solution{
public:
    vector<int> minPartition(int N)
    {
        // code here
        int notes[] = {2000, 500, 200, 100, 50, 20 , 10 , 5, 2, 1};
        vector<int> change;
        int note=0, i=0;
        while(N){
            //check if the current note is the maximum one that can divide the given N
            note = N/notes[i];
            while(note--){
                change.push_back(notes[i]);
            }
            N %= notes[i];
            i++;
        }
        return change;
    }
};