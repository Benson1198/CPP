#include <bits/stdc++.h>

using namespace std;

int main(){
	string s = "i like this program very much";
	int n = s.length();

	for(int i=s.begin();i <= (n-1)/2;i++){
		string temp = s[i];
		s[i] = s[n-1-i];
		s[n-1-i] = temp;
	}

	cout << s << endl;
}