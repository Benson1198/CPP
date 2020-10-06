// We are given two string A & B and we have to find the longest common 
// subsequence occuring in both the strings.

#include<bits/stdc++.h>

using namespace std;


int lcs(string s1,string s2, int m,int n){
    if(m==0 || n==0)
    {
        return 0;
    }

    else if (s1[m-1] == s2[n-1])
    {
        return 1 + lcs(s1,s2,m-1,n-1);
    }

    else
    {
        return max(lcs(s1,s2,m-1,n) ,lcs(s1,s2,m,n-1));
    }
    
}




// Memoization based DP solution to LCS
int lcsDPM(string s1, string s2, int m,int n){
    if(memo[m][n] != -1){
        return memo[m][n];
    }

    if(m==0 || n==0){
        memo[m][n] = 0;
    }

    else{
        if(s1[m-1] == s2[n-1]){
            memo[m][n] = 1 + lcsDPM(s1,s2,m-1,n-1);
        }

        else{
            memo[m][n] = max(lcsDPM(s1,s2,m-1,n), lcsDPM(s1,s2,m,n-1));
        }
    }
    return memo[m][n];
}


// Tabulation based Dp solution to LCS
int lcsDPT(string s1, string s2){
    n = s1.length();
    m = s2.length();

    int dp[m+1][n+1];

    for(int i=0;i<=m;i++){
        dp[i][0] = 0;
    }

    for(int i=0;i<=n;i++){
        dp[0][i] = 0;
    }

    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(s1[i-1] == s2[j-1]){
                dp[i][j] = 1 + dp[i-1][j-1]; 
            }
            else{
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }

    return dp[m][n];
}



int main(){

    // Memoization Method
    int memoization_result;
    int memo[m+1][n+1] = {-1};
    memoization_result = lcsDPM(s1,s2,m,n);


    // Tabulation Method
    int tabulation_result;
    tabulation_result = lcsDPT(s1,s2);

}