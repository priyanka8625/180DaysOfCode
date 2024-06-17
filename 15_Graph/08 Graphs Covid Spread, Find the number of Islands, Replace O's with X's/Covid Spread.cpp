class Solution {
public:
    int row[4] = {-1, 1, 0, 0};
    int col[4] = {0, 0, -1, 1};
    int helpaterp(vector<vector<int>> hospital)
    {
        //code here
        int r=hospital.size(), c=hospital[0].size();
        queue<pair<int, int>> q;
        //store covid patients into q
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                if(hospital[i][j] == 2)
                    q.push(make_pair(i, j));
            }
        }
        //apply passes
        int timer=0;
        while(!q.empty()){
            timer++;
            int curr_patient = q.size();
            while(curr_patient--){
                int i = q.front().first;
                int j = q.front().second;
                q.pop();
                
                //treverse it's adj u,d,r,l cells
                for(int k=0; k<4; k++){
                    if(isValid(i+row[k], j+col[k], r, c) && hospital[i+row[k]][j+col[k]]==1){
                        //then add it to q
                        hospital[i+row[k]][j+col[k]] = 2;
                        q.push(make_pair(i+row[k], j+col[k]));
                    }
                }
            }
        }
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                if(hospital[i][j] == 1)
                    return -1;
            }
        }
        return timer-1;//cuz last pass will not create any new covid patients
    }
    bool isValid(int i, int j, int r, int c){
        return i>=0 && i<r && j>=0 && j<c;
    }
};