class Solution {
public:

    void addEdge(vector<int> adj[], int u, int v){
        adj[u].push_back(v);
        adj[v].push_back(u);
    }


    void DFSutil(vector<int> adj[],int s,bool visited[]){
        visited[s] = true;

        for(int x: adj[s]){
            if(visited[x] == false){
                DFSutil(adj,x,visited);
            }
        }
    }

    int DFS(vector<int> adj[], int v){
        int comps = 0;
        bool visited[v+1];

        for(int i=0;i<v;i++){
            visited[i] = false;
        }

        for(int i=0;i<v;i++){
            if(visited[i] == false){
                comps++;
                DFSutil(adj,i,visited);
            }
        }

        return comps;
    }

    int makeConnected(int n, vector<vector<int>>& connections) {
        int edges = connections.size();
        int c;

        if(edges < n-1){
            return -1;
        }

        vector<int> adj[n];

        for(int i=0;i<edges;i++){
            addEdge(adj,connections[i][0],connections[i][1]);
        }

        c = DFS(adj,n);

        int red_edges = edges - (n-1- (c-1));

        if(red_edges < c-1){
            return -1;
        }

        else{
            return c-1;
        }
    }
};