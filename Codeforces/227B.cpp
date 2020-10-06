#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;

	unordered_map <int, int> umap;
    long long vas=0, pet=0;

	for(int i=0;i<n;i++){
		int temp;
		cin >> temp;
		umap[temp] = i;
	}

	int queries;
	cin >> queries;

	for(int i=0;i<queries;i++){
		int temp;
		cin >> temp;
		int pos = umap[temp];
		vas += (pos+1);
        pet += (n-pos);
	}
    cout << vas <<" "<<  pet << endl;
}