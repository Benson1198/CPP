void TopoSortBFS(vector<int> adj[],int v){
    int indegree [v] = {0};
    
    for(int i = 0;i<v;i++){
        for(int j: adj[i]){
            indegree[j]++;
        }
    }
    
    queue <int> q;

    for(int i = 0;i<v;i++){
        if(indegree[i] == 0){
            q.push(i);
        }
    }

    while(q.empty() == false){
        u = q.front();
        q.pop();
        cout << u << " ";

        for(int v: adj[u]){
            indegree[v]--;
            if (indegree[v] == 0){
                q.push(v);
            }
        }
    }
    
}