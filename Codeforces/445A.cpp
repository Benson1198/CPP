#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,m;
	cin >> n >> m;

	char board[n][m];

	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			char temp;
			cin >> temp;
			if(i%2 == 0){
				if(temp == '.' && j%2 == 0){
					board[i][j] = 'W';
				}
				else if(temp == '.' && j%2 != 0){
					board[i][j] = 'B';
				}
	            else{
	                board[i][j] = '-';
	            }
			}
			else{
				if(temp == '.' && j%2 == 0){
					board[i][j] = 'B';
				}
				else if(temp == '.' && j%2 != 0){
					board[i][j] = 'W';
				}
	            else{
	                board[i][j] = '-';
	            }
			}
		}
	}

	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){ 
			cout << board[i][j];
		}
		cout << endl;
	}
}