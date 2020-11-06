// We maintain a parent variable to check if the visited node ia a parent or not
// if it is a parent then cycle does not exist if it's not parent then cycle exists


bool DFSRec(vector<int> adj[],int s, bool visited[], int parent){
	visited[s] = true;

	for(int u: adj[s]){
		if(visited[u] == false){
			if(DFSRec(adj,u,visited,s) == true)
			{
				return true;
			}
		}
		else if(u != parent){
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
			if(DFSRec(adj,j,visited,recSt)== true){
				return true;
			}
		}
	}

	return false;
}