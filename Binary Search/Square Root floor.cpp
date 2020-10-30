#include<bits/stdc++.h>

using namespace std;

int sqRootFloor(int n){
    int low =1,high =n,ans= -1;

    while(low <= high){
        int mid = (high+low)/2;
        int mSq = mid*mid;

        if(mSq == x){
            return mid;
        }
        else if(mSq > x){
            high = mid-1;
        }

        else{
            low = mid-1;
            ans = mid;
        }
    } 

    return ans;
}