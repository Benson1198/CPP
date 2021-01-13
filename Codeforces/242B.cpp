#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

	long int l[n];
	long int r[n];

	long int pos[2];

	long diff = -1;

	int position,ans;

	long int t1,t2;

	for(int i=0;i<n;i++){
		cin >> t1 >> t2;

		l[i] = t1;
		r[i] = t2;
	}

	for(int i=0;i<n;i++){
		if(r[i] - l[i] > diff){
			diff = (r[i] - l[i]);
			pos[0] = l[i];
			pos[1] = r[i];
			position = i;
		}
	}

	ans = position + 1;

	for(int i=0;i<n;i++){
		if(pos[0] > l[i] || pos[1] < r[i]){
			ans = -1;
			break;
		}
	}


	cout << ans << endl;
	
}