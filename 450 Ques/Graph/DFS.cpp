#include <bits/stdc++.h>
using namespace std;

void DFSutil(vector<int> adj[],int s,bool visited[]){
    visited[s] = true;
    cout << s << " ";

    for(int x: adj[s]){
        if(visited[x] == false){
            DFSutil(adj,x,visited);
        }
    }
}

void DFS(vector<int> adj[], int v){
    bool visited[v+1];

    for(int i=0;i<v;i++){
        visited[i] = false;
    }

    for(int i=0;i<v;i++){
        if(visited[i] == false){
            DFSutil(adj,i,visited);
        }
    }
}