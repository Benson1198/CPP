#include<bits/stdc++.h>

using namespace std;

int reverseBinarySearch(int arr[],int n,int x){
    int low = 0,high = n-1;
    while(low <= high){
        int mid = low + (high-low)/2;

        if(arr[mid] == x){
            return mid;
        }
        else if(arr[mid] > x){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }

    return -1;
}

int main(){

}