//undirected unweighted

#include<iostream>
#include<vector>
using namespace std;

int main(){
    //get the vertices and edges from user
    int vertex, edges;
    cout<<"enter no. of vertices and edges in graph:";
    cin>>vertex>>edges;
    cout<<"enter edges as u->v:"<<endl;
    int edge[edges][2];
    int u,v;
    for(int i=0; i<edges; i++){
        cin>>u>>v;
        //store the edges in edge array
        edge[i][0] = u;
        edge[i][1] = v;
    }

    //create an adj matrix for vertices and edges between them
    vector<vector<int> > adjList(vertex);
    for(int i=0; i<edges; i++){
        //insert edge between u and v in adjMatrix
        int u = edge[i][0];
        int v = edge[i][1];
        //store u->v and v->u as the graph is undirected unweighted
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    //print the matrix
    for(int i=0; i<vertex; i++){
        cout<<i<<"-> ";
        for(int j=0; j<adjList[i].size(); j++){
            cout<<adjList[i][j]<<" ";
        }
        cout<<endl;
    }
}
