#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, k,t;
	int arr[n];
	
	cin >> n>>k;
	
	for(int j=0;j<n;j++){
	    cin >> t;
	    arr[j] = t;
	}

	priority_queue <int> maxh;

	for(int i=0;i<n;i++){
		maxh.push(arr[i]);

		if(maxh.size() > k){
			maxh.pop();
		}
	}
	cout << maxh.top()<< endl;
}