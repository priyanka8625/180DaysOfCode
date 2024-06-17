//undirected weighted

#include<iostream>
#include<vector>
using namespace std;

int main(){
    //get the vertices and edges from user
    int vertex, edges;
    cout<<"enter no. of vertices and edges in graph:";
    cin>>vertex>>edges;
    cout<<"enter weighted edges as u v weight:"<<endl;
    int edge[edges][3];
    int u,v, w;
    for(int i=0; i<edges; i++){
        cin>>u>>v>>w;
        //store the weighted edges in edge array
        edge[i][0] = u;
        edge[i][1] = v;
        edge[i][2] = w;
    }

    //create an adj matrix for vertices and edges between them
    vector<vector<int> > adjMatrix(vertex, vector<int>(vertex, 0));
    for(int i=0; i<edges; i++){
        //insert edge between u and v in adjMatrix
        int u = edge[i][0];
        int v = edge[i][1];
        //store u->v and v->u as the graph is undirected weighted
        adjMatrix[u][v] = edge[i][2];
        adjMatrix[v][u] = edge[i][2];
    }

    //print the matrix
    for(int i=0; i<vertex; i++){
        for(int j=0; j<vertex; j++){
            cout<<adjMatrix[i][j]<<" ";
        }
        cout<<endl;
    }
}
