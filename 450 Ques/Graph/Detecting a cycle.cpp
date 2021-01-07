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