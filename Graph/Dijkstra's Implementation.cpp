vector<int> dijkstra(vector<int> graph[], int v, int src){
	vector<int> dist(v,INT_MAX);
	dist[src] = 0;

	vector<bool> fin(v,false); // Finalised array

	for(int count=0;count<v;count++){
		u = -1;
		for(int i=0;i<v;i++){
			if(!fin[i] && (u==-1 || dist[i] < dist[u])){
				u=i;
			}
		}
		fin[i] = true;
	}
	for(int y =0; y<v ; y++){
		if(graph[u][y]!=0 && fin[y] == false){
			dist[y] = min(dist[y], dist[u]+graph[u][y]);
		}
	}

	return dist;
}


// This implementation can be further optimized by using Adjacency List Representation
// and using Min Heap for extracting min value