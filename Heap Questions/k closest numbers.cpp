#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, k,m,t;
	int arr[n];
	
	cin >> n>>k>>m;
	
	for(int j=0;j<n;j++){
	    cin >> t;
	    arr[j] = t;
	}

	priority_queue <pair<int,int>> maxh;

	for(int i=0;i<n;i++){
		maxh.push(<abs(arr[i]-m),arr[i]>);

		if(maxh.size() > k){
			maxh.pop();
		}
	}
	while(maxh.size() > 0){
		cout << maxh.top().second << " ";
		maxh.pop();
	}
	
}