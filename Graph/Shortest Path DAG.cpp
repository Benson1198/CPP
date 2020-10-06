void DFSUtil(vector<int> adj[],int u,stack <int> st){
    visited[u] = true;

    for(int i:adj[u]){
        if(visited[i] == false){
            DFSUtil(adj,i,st);
        }
    }
    st.push(u);
}

vector<int> TopoSortDFS(vector<int> adj[],int v){
    bool vector<int> ans;
    bool visited[v];
    
    for(int i = 0;i<v;i++){
        visited[i] = false;
    }

    stack <int> st;

    for(int j = 0;j<v;j++){
        if(visited[j] == false){
            DFSUtil(adj,j,st);
        }
    }

    while(st.empty() == false){
        u = st.top();
        ans.push_back(u);
        st.pop();
    }

    return ans;
}

int * shortestPathDAG(vector<int> adj[],int v,int s){
    int dist[v] = {inf};
    dist[s] = 0;

    vector <int> topoSort = TopoSortDFS(adj,v);

    for(int i=0;i<v;i++){
        for(int it: adj[i]){
            v = it->first;
            w = it->second;
            if(dist[v] > (dist[i] + w)){
                dist[v] = dist[i] + w;
            }
        }
    }
    return dist;
}

