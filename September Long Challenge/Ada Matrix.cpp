#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t>0){
		int n,count =0;
		cin >> n;
        int org[n];
		int aux[n];
		int matrix[n][n];

		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				int temp;
				cin >> temp;
                if(i==0){
					org[j] = temp; 
				}
				matrix[i][j] = temp;	
			}
		}

		for(int k=0;k<n;k++){
			if(org[k] == k+1){
				aux[k] = 1;
			}
			else{
				aux[k] = 0;
			}
		}

		if(aux[n-1] != aux[n-2]){
            count++;
		}

		for(int l=n-3;l>-1;l--){
			if(aux[l] != aux[l+1]){
				count++;
			}
		}
		
		cout << count << endl;
		t--;
	}
}