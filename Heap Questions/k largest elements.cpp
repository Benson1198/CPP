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

	priority_queue <int, vector<int>, greater<int>> minh;

	for(int i=0;i<n;i++){
		minh.push(arr[i]);

		if(minh.size() > k){
			minh.pop();
		}
	}
	while(minh.size() > 0){
		cout << minh.top()<< endl;
		minh.pop();
	}
	
}