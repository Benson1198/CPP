// In this question we are given an array of 
// different coins(Infite coins of each types are available) 
// and a Sum value is given. Our objective is to find the ways of combining the 
// given coins to make the total equal to the sum.



#include<bits/stdc++.h>

using namespace std;

// Simple Recursive solution
int getCount(int coins[],int n, int sum){

    if(sum == 0){
        return 1;
    }

    if(n == 0){
        return 0;
    }

    int res = getCount(coins,n-1,sum);

    if(coins[n-1] <= sum){
        res = res + getCount(coins,n,sum-coins[n-1]);
    }

    return res;
}

int main(){

}