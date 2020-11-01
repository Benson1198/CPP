#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;

    int n = s.length();

    map<char,int> mp;

    for(int i=0;i<n;i++){
		if ( mp.find(s[i]) == mp.end()){
			mp.insert({s[i],1});
		} 
		else {
			mp[s[i]]++;
		}
	}

    int count =0;

    for (auto i : mp){
        if(i.second % 2 == 1){
			count++;
		}
	}

    if(count > 1){
        if((count-1) % 2 == 0){
            cout << "First" << endl;
        }
        else{
            cout << "Second" << endl;
        }
    }
    else{
        cout << "First" << endl;
    }
}