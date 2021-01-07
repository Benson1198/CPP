// Detecting a cycle using DFS

bool DFSutil(vector<int> adj[], int s, bool visited[], int parent){
    visited[s] = true;

    for(int x: adj[s]){
        if(visited[x] == false){
            if(DFSutil(adj,x,visited,s) == true){
                return true;
            }
        }
        else if(x != parent){
            return true;
        }
    }
    return false;
}

bool CycleDetectDFS(vector<int> adj[], int v){
	bool visited[v];

	for(int i = 0; i<v;i++){
		visited[i] = false;
	}

	for(int j = 0;j<v;j++){
		if(visited[j] == false){
			if(DFSutil(adj,j,visited,-1)== true){
				return true;
			}
		}
	}

	return false;
}


// Detecting a cycle using BFS

bool BFSutil(vector<int> adj[], int s,int v, bool visited[]){
    vector<int> parent(V, -1);

    queue<int> q;

    visited[s] = true;
    q.push(s);

    while(q.empty() == false){
        int temp = q.front();
        q.pop();

        for(int x: adj[temp]){
            if(visited[x] == false){
                visited[x] = true;
                q.push(temp);

                parent[x] = temp;
            }

            else if(parent[temp] != x){
                return true;
            }
        }
    }
    return false;
}


bool isCyclicDisconntected(vector<int> adj[], int v) 
{ 
    
    bool visited[v];

    for(int i = 0; i<v;i++){
		visited[i] = false;
	}
  
    for (int i = 0; i < V; i++) 
        if (!visited[i] && BFSutil(adj, i, V, visited)){
            return true; 
        } 
    return false; 
}
