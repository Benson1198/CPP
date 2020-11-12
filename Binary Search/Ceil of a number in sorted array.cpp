#include <bits/stdc++.h>
using namespace std;

int ceil(int arr[],int n,int x){
    int res = arr[n-1];
    int low = 0, high = n-1;

    while(low <= high){
        int mid = low + (high - low)/2;

        if(arr[mid] == x){
            return arr[mid];
        }
        if(arr[mid] > x){
            if(arr[mid] < res){
                res = arr[mid];
            }
            high = mid-1;
        }

        else if(arr[mid] < x){
            low = mid+1;
        }

    }

    return res;

}