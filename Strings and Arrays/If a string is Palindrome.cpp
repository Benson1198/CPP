#include <bits/stdc++.h>

using namespace std;


bool isPalindrome(string *s){
	int n = s.length();

	if(n == 1){
		return true;
	}

	for(int i=0;i<n/2;i++){
		if(s[i] != s[n-1-i]){
			return false;
		}
	}
	return true;
}


int main(){
	string s = "malayalam";
	
	cout << isPalindrome(&s) << endl;
}