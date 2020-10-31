#include<bits/stdc++.h>

using namespace std;

int helper(vector<int> arr){
	int n = arr.size();
	if(n == 1){
		return 0;
	}
	else if(n == 2){
		return (arr[1] - arr[0]);
	}

	else{
		int d = arr[1] - arr[0];
		for(int i=1;i<n-1;i++){
			if(arr[i] + d != arr[i+1]){
				return -1;
			}
		}
		return d;
	}
}

int main(){
	int n,count=0;
	cin >> n;

	int arr[n];

	for(int i=0;i<n;i++){
		cin >> arr[i];
	}

	map <int, vector<int> > mp;

	for(int i=0;i<n;i++){
		if ( mp.find(arr[i]) == mp.end()){
			mp.insert({arr[i],{i}});
		} 
		else {
			mp[arr[i]].push_back(i);
		}
	}
    
    for (auto i : mp){
		if(helper(i.second) != -1){
			count++;
		}
	} 
    
    cout << count << endl;
    
    for (auto i : mp){
		if(helper(i.second) != -1){
			cout << i.first << " " << helper(i.second)  << endl;
		}
	}   
    
}