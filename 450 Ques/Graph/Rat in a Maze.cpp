#include <bits/stdc++.h>
using namespace std;

void DFSutil(int m[MAX][MAX],int i, int j,int n,vector<string>&ans, string route){
    if(m[i][j] != 1){
        return;
    }

    else if(i<0 || i>n-1 || j<0 || j>n-1){
        return;
    }

    if(i==n-1 && j==n-1){
        ans.push_back(route);
        return ;
    }

    m[i][j] = 2;

    DFSutil(m,i+1,j,n,ans,route+'D');
    DFSutil(m,i,j+1,n,ans,route+'R');
    DFSutil(m,i,j-1,n,ans,route+'L');
    DFSutil(m,i-1,j,n,ans,route+'U');

    m[i][j]=1;
}

vector<string> findPath(int m[MAX][MAX], int n) {
    vector<string> ans;
    string s1 = "";
    DFSutil(m,0,0,n,ans,s1);
    
    
    sort(ans.begin(),ans.end());
    return ans;
}