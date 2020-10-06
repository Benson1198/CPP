// Simple Version of BFS and a source node id given

void BFS(vector<int> adj[], int v, int s){
    bool visited[v+1];

    for(int i=0;i<v; i++)
        visited[i] = false;
    
    queue<int>q;
    visited[s] = true;
    q.push(s);

    while(q.empty() == false){
        int u = q.front();
        q.pop();
        cout << u << " ";
        for(int v: adj[u]){
            if (visited[v] == false){
                visited[v] = true;
                q.push(v);
            }
        }
    }
}

// When no source is given and some nodes are disconnected

void BFS(vector<int> adj[], int v, int s, bool visited[]){
    
    queue<int>q;
    visited[s] = true;
    q.push(s);

    while(q.empty() == false){
        int u = q.front();
        q.pop();
        cout << u << " ";
        for(int v: adj[u]){
            if (visited[v] == false){
                visited[v] = true;
                q.push(v);
            }
        }
    }
}

void BFSDin(vector<int>adj[], int v){
    bool visited[v+1];

    for(int i=0;i<v; i++)
        visited[i] = false;

    for(int i; i<v;i++){
        if(visited[i] == false){
            BFS(vector<int>adj[],int v,i,bool visited);
        }
    }
}