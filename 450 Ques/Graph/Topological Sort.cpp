// BFS based solution (Kahn's Algorithm)

void topological_sort(vector<int> adj[], int v){
    int indegree[v];

    for(int i=0;i<v;i++){
        for(int x: adj[v]){
            indegree[x]++;
        }
    }

    queue<int> q;

    for(int i=0;i<v;i++){
        if(indegree[i] == 0){
            q.push(i);
        }
    }


    while(q.empty() == false){
        int u = q.front();
        q.pop();
        cout << u << " ";

        for(int x: adj[u]){
            indegree[x]--;
            if(indegree[v] == 0){
                q.push(v);
            }
        }
    }
}



// DFS based solution(usning stack data structure)

#include <bits/stdc++.h>
using namespace std;

void DFSutil(vector<int> adj[],int s,bool visited[], stack<int> &st){
    visited[s] = true;

    for(int x: adj[s]){
        if(visited[x] == false){
            DFSutil(adj,x,visited,st);
        }

        st.push(x);
    }
}

void DFS(vector<int> adj[], int v){
    bool visited[v+1];

    stack<int> st;

    for(int i=0;i<v;i++){
        visited[i] = false;
    }

    for(int i=0;i<v;i++){
        if(visited[i] == false){
            DFSutil(adj,i,visited,st);
        }
    }

    while(st.empty() == false){
        int x = st.top();
        cout << x << " ";

        st.pop();
    }
}