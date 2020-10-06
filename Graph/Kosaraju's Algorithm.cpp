// There are mainly three syeps in this Algorithm

// 1> Arrange the vertices in the decreasing order of 
//    their completion time while doing a dfs i.e. Find the topological sort of the given graph.

// 2> Reverse the edges(Find the Transpose of the given Graph).

// 3> Apply DFS on the vertices arranged in the decreasing order above
//    and store the result.

#include <bits/stdc++.h>
using namespace std;

// Function to find the transpose of A graph(adjacency list representation)
	
	// function to add an edge from vertex source to vertex dest 
void addEdge(vector<int> adj[], int src, int dest) 
{ 
    adj[src].push_back(dest);  
}

	// function to get Transpose of a graph taking adjacency 
	// list of given graph and empty Transpose graph 
void transposeGraph(vector<int> adj[],  
                     vector<int> transpose[], int v) 
{ 
    for (int i = 0; i < v; i++) 
        for (int j = 0; j < adj[i].size(); j++) 
            addEdge(transpose, adj[i][j], i); 
}

// Function to find DFS

void DFSUtil(vector<int> adj[],bool visited[],int u,stack <int> st){
    visited[u] = true;

    for(int i:adj[u]){
        if(visited[i] == false){
            DFSUtil(adj,visited,i,st);
        }
    }
    st.push(u);
}


// DFS Function to print edges


void DFS(vector<int> adj[],bool visited[],int u){
    visited[u] = true;

    for(int i:adj[u]){
        if(visited[i] == false){
            DFS(adj,visited,i);
        }
    }
    cout << u << " ";
}

// Function to find Topological Sort of graph

vector<int> TopoSortDFS(vector<int> adj[],int v){
    bool visited[v];
    vector<int> res;
    
    for(int i = 0;i<v;i++){
        visited[i] = false;
    }

    stack <int> st;

    for(int j = 0;j<v;j++){
        if(visited[j] == false){
            DFSUtil(adj,visited,j,st);
        }
    }

    while(st.empty() == false){
        int u = st.top();
        res.push_back(u);
        st.pop();
    }

    return res;
}


int main(){
	int v = 5; 
    vector<int> adj[v]; 
    addEdge(adj, 0, 1); 
    addEdge(adj, 0, 4); 
    addEdge(adj, 0, 3); 
    addEdge(adj, 2, 0); 
    addEdge(adj, 3, 2); 
    addEdge(adj, 4, 1); 
    addEdge(adj, 4, 3);

    vector<int> topoSrt = TopoSortDFS(adj, v);


    vector<int> transpose[v]; 
    transposeGraph(adj, transpose, v);



    bool visited_1[v];

    for(int i = 0;i<v;i++){
        visited_1[i] = false;
    }

    for (auto& it : topoSrt){
    	if(visited_1[it] == false){
    		DFS(transpose,visited_1,it);
    		cout << "\n";
    	}
    }

    return 0;
}

