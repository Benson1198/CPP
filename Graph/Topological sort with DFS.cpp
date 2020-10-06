void DFSUtil(vector<int> adj[],bool visited[],int u,stack <int> st){
    visited[u] = true;

    for(int i:adj[u]){
        if(visited[i] == false){
            DFSUtil(adj,visited,i,st);
        }
    }
    st.push(u);
}


void TopoSortDFS(vector<int> adj[],int v){
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
        cout << u << " ";
        st.pop();
    }
}