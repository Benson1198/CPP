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


