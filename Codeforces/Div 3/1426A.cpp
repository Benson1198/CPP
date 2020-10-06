#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t>0){
		int n,x;
		cin >> n >> x;

		int flr = 1, count = 2;

		while(count < n){
			count += x;
			flr ++;
		}

		cout << flr << endl;


		t--;
	}
}