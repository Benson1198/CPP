struct Edge{
	int src, det,wt;

	Edge(int s, int d, int w){
		src = s; dest = d; wt = w;
	}
};

bool myCmp(Edge e1, Edgw e2){
	return e1.wt < e2.wt;
}

