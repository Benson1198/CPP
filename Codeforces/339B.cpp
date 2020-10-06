#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,m;
	cin >> n >> m;

	int pos = 1;
    long long int ans = 0;
    for(int i=0; i<m; i++)
    {
        int curr;
        cin >> curr;

        if(curr >= pos)
            ans += curr - pos;
        else
            ans += n - (pos - curr);
        pos = curr;
    }

    cout << ans << endl;
}
