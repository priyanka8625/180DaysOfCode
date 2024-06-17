


int kthSmallest(int mat[MAX][MAX], int n, int k)
{
    //Your code here
    vector<pair<int, pair<int, int>>> temp;
    for(int i=0; i<n; i++){
      temp.push_back(make_pair(mat[i][0], make_pair(i, 0))); //insert first column initially into temp
    }
//   copy temp into minheap which for below syntax taken O(n) time
    //create a min heap containing data and it's correspnding row and column
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>> > p(temp.begin(), temp.end());
    
    int ans=0;
    pair<int, pair<int, int>> element;
    while(k--){
        //take out the minimum data from minheap
        element = p.top();
        p.pop();
        //assume ans as top of minheap until k becomes zero
        ans = element.first;
        //insert the next possible minimum element into minheap
        //which will always be the one which is adjacent to the popped element in the corresponding
        //row as rows and columns are sorted already
        int i = element.second.first;//row number
        int j=element.second.second;//col number
        //check validity of indices before pushing next element
        if(i<n && j+1<n)
            p.push(make_pair(mat[i][j+1], make_pair(i, j+1)));//inssert element of the same row but next column 
    }
    return ans;
}