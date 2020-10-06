#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;

	int arr[n];

	set <int> st;

	unordered_map <int, vector<int> > mp;

	for(int i=0;i<n;i++){
		int temp;	
		cin >> temp;
		
		arr[i] = temp;
		st.insert(temp);
	}


	for(int i=0;i<n;i++){
		mp[arr[i]].push_back(i);
	}
    
    cout << st.size() << endl;
    
    set <int> :: iterator itr;
    
	for (itr = st.begin(); itr != st.end(); ++itr) 
    { 
    	if(mp[*itr].size() == 1){
    		cout << *itr << " " << 0 << endl;
    	}
    	else{
    		cout << *itr << " " << abs(mp[*itr][0] - mp[*itr][1]) << endl;
    	}
    }
}