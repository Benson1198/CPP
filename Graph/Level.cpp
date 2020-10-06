// Complete the Function
int dfsUtil(vector<int> adj[],bool visited[], int u,int level,int x){
    level ++;
    if(u==x){
        return level;
    }
    
    visited[u] = true;

    for(int i:adj[u]){
        if(visited[i] == false){
            dfsUtil(adj,visited,i,level,x);
        }
    }
    level--;
    
    return -1;
}


int Graph::levels( int x, int in){
    bool visited[V];
    
    int level = 0, ans;
    
    for(int i = 0;i<V;i++){
        visited[i] = false;
    }
    
    if(x == 0){
        return 0;
    }
    
    for(int j = 0;j<V;j++){
        if(visited[j] == false){
            ans = dfsUtil(adj,visited,j,level,x);
            if(ans != -1){
                return ans;
            }
        }
    }
    
    return -1;
}
