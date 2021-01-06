// When source node is not given
// and the grpah is disconnected

void bfsUtil(vector<int> adj[],int s,int v,bool visited[]){
    visited[s] = true; 
    queue<int> q;
    q.push(s);

    while(q.empty() == false){
        int temp = q.front();
        cout << temp << " ";
        q.pop();

        for(int x: adj[temp]){
            if(visited[x] == false){
                visited[x] = true;
                q.push(x);
            }
        }
        cout << endl;
    }
}


void BFS(vector<int> adj[], int v){
    bool visited[v+1];

    for(int i=0;i<v;i++){
        visited[i] = false;
    }

    for(int i=0;i<v;i++){
        if(visited[i] == false){
            bfsUtil(adj,i,v,visited);
        }
    }
}