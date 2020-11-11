#include<bits/stdc++.h>

using namespace std;

int searchNeralySorted(int arr[],int n,int x){
    int low = 0,high = n-1;
    
    while(low <= high){
        int mid = low + (high-low)/2;

        if(arr[mid] == x){
            return mid;
        }

        else if(mid != 0 && arr[mid -1] == x){
            return mid-1;
        }

        else if(mid != n-1 && arr[mid + 1] == x){
            return mid + 1;
        }

        else if( arr[mid] < x )
            low = mid+2;
        
        else if( arr[mid] > x )
            high = mid-2;
    }

    return -1;
}