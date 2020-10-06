#include<bits/stdc++.h>

using namespace std;

int main(){
	vector<int> res;
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
			res.push_back(minh.top());
			minh.pop();
		}
	}
	while(k > 0){
		res.push_back(minh.top());
		minh.pop();
		k--;
	}

	for(int a=0;a<n;a++){
		cout << res[a] << " ";
	}
	
}