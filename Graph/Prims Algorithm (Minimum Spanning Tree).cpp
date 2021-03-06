// Given a weighted, undirected and connected graph, find the
// Spanning Tree of it.

// Prims algorithm is a Greedy algorithm

int primMST(vector<int> graph[],int v){
	int key[v], res = 0;
	fill(key,key+v,INT_MAX);

	key[0] = 0;

	bool mSet[v] = {false};

	for(int count = 0;count<v;count++){
		int u = -1;
		for(int i = 0;i<v;i++){
			if(!mSet[i] && (u==-1 || key[i] < key[u])){
				u = i;
			}
		}

		mSet[count] = true;
		res += key[u];

		for(int j = 0;j<v;j++){
			if(graph[u][j] != 0 && !mSet[j]){
				key[j] = min(key[j],graph[u][j]);
			}
		}
	}
	return res;
}