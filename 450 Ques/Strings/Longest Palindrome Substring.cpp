#include <bits/stdc++.h>
using namespace std;


void longestPalin(string str,int *arr){
    int n = str.size();

    bool tab[n][n];

    memset(tab,0,sizeof(tab));

    int max_len = 1;

    for(int i=0;i<n;i++){
        tab[i][i] = true;
    }

    int start = 0;
    for(int i=0;i<n-1;i++){
        if(str[i] == str[i+1]){
            start = i;
            tab[i][i+1] = true;
            max_len = 2;
        }
    }

    for(int k = 3;k<=n;k++){
        for(int i = 0;i<n-k+1;i++){
            int j = i+k-1;

            if(str[i] == str[j] && tab[i+1][j-1]){
                tab[i][j] = true;

                if(k > max_len){
                    start = i;
                    max_len = k;
                }
            }
        }
    }

    arr[0] = start;
    arr[1] = max_len;
}

int main() {
	
	int t;

    cin >> t;

    while(t>0){
        string temp;

        getline(cin, temp);
        
        int arr[2];

        longestPalin(temp,arr);
        
        for (int i = arr[0]; i <= arr[0] + arr[1] -1 ; i++){
            cout << temp[i];
        }
        
        cout << endl;

        t--;
    }
}