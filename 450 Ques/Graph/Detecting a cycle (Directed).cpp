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





// Using Kahn's Algorithm (Modified by adding a variable named count)


void topologicalSort(vector<int> adj[], int V) 
{ 
    vector<int> in_degree(V, 0); 
  
    for (int u = 0; u < V; u++) { 
        for (int x:adj[u]) 
            in_degree[x]++; 
    } 
  
    queue<int> q; 
    for (int i = 0; i < V; i++) 
        if (in_degree[i] == 0) 
            q.push(i); 

    int count=0;  
    while (!q.empty()) { 
        int u = q.front(); 
        q.pop(); 
  
        for (int x: adj[u]) 
            if (--in_degree[x] == 0) 
                q.push(x); 
        count++;
    } 
    if (count != V) { 
        cout << "There exists a cycle in the graph\n"; 
    }
    else{
        cout << "There exists no cycle in the graph\n";
    }
}