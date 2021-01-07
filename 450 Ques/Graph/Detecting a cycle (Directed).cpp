#include <bits/stdc++.h>
using namespace std;

// Detecting Cycle in Directed Graph
// using DFS

bool DFSutil(vector<int> adj[],int s, bool visited[], bool recTemp[]){
    visited[s] = true;
    recTemp[s] = true;

    for(int x: adj[s]){
        if(visited[x] == false && DFSutil(adj,x,visited,recTemp)){
            return true;
        }
        else if(recTemp[x] == true){
            return true;
        }
    }
    recTemp[s] = false;
    return false;
} 

bool detectCycle(vector<int> adj[], int v){
    bool visited[v];
    bool recTemp[v];

    for(int i=0;i<v;i++){
        visited[i] = false;
        recTemp[i] = false;
    }

    for(int i=0;i<v;i++){
        if(visited[i] == false){
            if(DFSutil(adj,i,visited,recTemp) == true){
                return true;
            }
        }
    }

    return false;
}