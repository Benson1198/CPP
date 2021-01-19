class Solution {
public:
    struct Edge{
        int src, dest, weight;
    };

    struct Graph {
        int V,E;
        struct Edge *edge;
    };

    struct Graph *createGraph(int V, int E){
        struct Graph *graph = new Graph;
        graph->V = V;
        graph->E = E;
        graph->edge = new Edge[E];
        return graph; 
    };

    bool bellmanFord(struct Graph* graph, int src){
        int V = graph->V;
        int E = graph->E;
        int dist[V];

        for(int i=0;i<V;i++){
            dist[i] = INT_MAX;
        }
        dist[src] = 0;

        for (int i = 1; i <= V - 1; i++) { 
    		for (int j = 0; j < E; j++) { 
    			int u = graph->edge[j].src; 
    			int v = graph->edge[j].dest; 
    			int weight = graph->edge[j].weight; 
    			if (dist[u] != INT_MAX && dist[u] + weight < dist[v]) 
    				dist[v] = dist[u] + weight; 
    		} 
	}

        for (int i = 0; i < E; i++) { 
            int u = graph->edge[i].src; 
            int v = graph->edge[i].dest; 
            int weight = graph->edge[i].weight; 
            if (dist[u] != INT_MAX && dist[u] + weight < dist[v]) { 
                return true; 
		}
	}
	return false;
}


	int isNegativeWeightCycle(int n, vector<vector<int>>edges){
        int V = n;
        int E = edges.size();

        struct Graph* graph = createGraph(V,E);

        for(int i=0;i<E;i++){
            graph->edge[i].src = edges[i][0];
            graph->edge[i].dest = edges[i][1];
            graph->edge[i].weight = edges[i][2];
        }

        if(bellmanFord(graph, 0)){
            return 1;
        }
        else{
            return 0;
        }
	}
};