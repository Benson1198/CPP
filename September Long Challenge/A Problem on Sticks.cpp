#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t>0){
		long ans;
		set <long long> s1;
		long n;
		cin >> n;
		bool is_zero = false;

		for(int i=0;i<n;i++){
			long long temp;
			cin >> temp;
			if(temp==0){
				is_zero = true;
			}
			s1.insert(temp);
		}

		if(is_zero){
			ans = s1.size() -1;
		}
		else{
			ans = s1.size();
		}

		cout << ans << endl;

		t--;
	}
}