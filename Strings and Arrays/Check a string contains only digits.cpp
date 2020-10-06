#include <bits/stdc++.h>

using namespace std;

int main(){
	string s = "i like this program very much";
	
	bool digit = true;

	for(int i=0;i<s.length();i++){
		int temp = s[i];

		if(temp <48 || temp>57){
			digit = false;
		}
	}

	if(digit){
		cout << "YES" << endl;
	}
	else{
		cout << "NO" << endl;
	}
}