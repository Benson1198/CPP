bool DFSRec(vector<int> adj[],int s, bool visited[], bool recSt[]){
    visited[s] = true;
    recSt[s] = true;
    
    for(int u: adj[s]){
        if(visited[u] == false && DFSRec(adj,u,visited,recSt)){
            return true;
        }
        else if(recSt[u] == true){
            return true;
        }
    }
    recSt[u] = false;
    return false;
}

bool cycleDetectDFS(vector<int> adj[], int v){
    bool visited[v];
    bool recSt[v];
    
    for(int i = 0;i<v;i++){
        visited[i] = false;
        recSt[i] = false;
    }
    
    for(int j =0; j<v; j++){
        if(visited[j] == false){
            if(DFSRec(adj,j,visited,recSt == true){
                return true;
            }
        }
    }
    
    return false;
}