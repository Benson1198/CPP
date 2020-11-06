// Simple implementation when graph is connected and the source is also given

void DFSRec(vector<int>adj[], int s, bool visited[]){
	visited[s] = true;
	cout << s << " ";

	for(int u: adj[s]){
		if(visited[u] == false){
			DFSRec(adj,u,visited);
		}
	}

}

void DFS(vector<int> adj[],int v, int s){
	bool visited[v];

	for(int i=0; i<v; i++){
		visited[i] = false;
	}

	DFSRec(adj,s,visited);
}

// When graph is disconnected and the source is not given


void DFSRec(vector<int>adj[], int s, bool visited[]){
	visited[s] = true;
	cout << s << " ";

	for(int u: adj[s]){
		if(visited[u] == false){
			DFSRec(adj,u,visited);
		}
	}

}

void DFS(vector<int> adj[],int v){
	bool visited[v];

	for(int i=0; i<v; i++){
		visited[i] = false;
	}

	for(int i=0; i<v; i++){
		if(visited[i] == false){
			DFSRec(adj,i,visited);
		}
	}
}



// Count the number of connected components in an undirescted graph

void DFSRec(vector<int>adj[], int s, bool visited[]){
	visited[s] = true;

	for(int u: adj[s]){
		if(visited[u] == false){
			DFSRec(adj,u,visited);
		}
	}

}

int DFS(vector<int> adj[],int v){
	int count = 0;
	bool visited[v];

	for(int i=0; i<v; i++){
		visited[i] = false;
	}

	for(int i=0; i<v; i++){
		if(visited[i] == false){
			DFSRec(adj,i,visited);
			count ++;
		}
	}
	return count;
}