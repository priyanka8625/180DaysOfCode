//undirected weighted

#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){
    //get the vertices and edges from user
    int vertex, edges;
    cout<<"enter no. of vertices and edges in graph:";
    cin>>vertex>>edges;
    cout<<"enter edges as u->v w:"<<endl;
    int edge[edges][3];
    int u,v, w;
    for(int i=0; i<edges; i++){
        cin>>u>>v>>w;
        //store the edges in edge array
        edge[i][0] = u;
        edge[i][1] = v;
        edge[i][2] = w;
    }

    //create an adj list for vertices and edges between them
    vector<vector<pair<int, int> > > adjList(vertex);
    for(int i=0; i<edges; i++){
        //insert edge between u and v in adjMatrix
        int u = edge[i][0];
        int v = edge[i][1];
        int w = edge[i][2];
        //store u->v and v->u as the graph is undirected weighted
        adjList[u].push_back(make_pair(v, w));
        adjList[v].push_back(make_pair(u, w));
    }

    //print the matrix
    for(int i=0; i<vertex; i++){
        cout<<i<<"-> ";
        for(int j=0; j<adjList[i].size(); j++){
            //print adj vertex and edge weight
            cout<<"("<<adjList[i][j].first<<", "<<adjList[i][j].second<<")"<<" ";
        }
        cout<<endl;
    }
}
