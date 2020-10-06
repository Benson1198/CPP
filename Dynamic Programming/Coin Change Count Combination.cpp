// In this question we are given an array of 
// different coins(Infite coins of each types are available) 
// and a Sum value is given. Our objective is to find the ways of combining the 
// given coins to make the total equal to the sum.



#include<bits/stdc++.h>

using namespace std;

// Simple Recursive solution
int getCountRec(int coins[],int n, int sum){

    if(sum == 0){
        return 1;
    }

    if(n == 0){
        return 0;
    }

    int res = getCountRec(coins,n-1,sum);

    if(coins[n-1] <= sum){
        res = res + getCountRec(coins,n,sum-coins[n-1]);
    }

    return res;
}




// Dynamic Programming Approach
int getCount(int coins[],int n,int sum){
    int dp[sum+1][n+1];

    for(int i=0;i<=n;i++){
        dp[0][i] = 1;
    }

    for(int i=0;i<=sum;i++){
        dp[i][0] = 1;
    }

    for(int i=1;i<= sum;i++){
        for(int j=1;j<=n;j++){
            dp[i][j] = dp[i][j-1];

            if(coins[j-1] <= i){
                dp[i][j] += dp[i-coins[j-1]][i];
            }
        }
    }

    return dp[sum][n];
}



int main(){

}