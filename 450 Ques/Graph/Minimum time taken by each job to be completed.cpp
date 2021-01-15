#include <bits/stdc++.h>
using namespace std;

void DFSutil(vector<int> adj[],int s,bool visited[], stack<int> &st,int level){
    visited[s] = true;

    for(int x: adj[s]){
        if(visited[x] == false){
            DFSutil(adj,x,visited,st,level+1);
        }

        st.push({x,level});
    }
}

void DFS(vector<int> adj[], int v){
    bool visited[v+1];
    int level = 1;

    stack<pair<int,int>> st;

    for(int i=0;i<v;i++){
        visited[i] = false;
    }

    for(int i=0;i<v;i++){
        if(visited[i] == false){
            DFSutil(adj,i,visited,st,level);
        }
    }

    while(st.empty() == false){
        pair<int,int> x = st.top();
        cout << x.first << " " << x.second << " ";

        st.pop();
    }
}

void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
}

int main() 
{ 
	int V=5;
	vector<int> adj[V];
	addEdge(adj,0, 1); 
    addEdge(adj,4, 1); 
    addEdge(adj,1, 2); 
    addEdge(adj,2, 3); 
    addEdge(adj,3, 1);  
  
    DFS(adj,V);

	return 0; 
} 