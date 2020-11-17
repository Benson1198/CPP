#include<bits/stdc++.h>

using namespace std;

// So, we are given a sorted array which is rotated a number of times.
// We have to finnd the number of times the array is rotated.
// This can be easily done by finding the index of the minimum element.
// Index of minimu element = Number of times sorted array is rotated.


int numOfRotations(int arr[],int n){
    int low = 0, high = n-1;

    while(low <= high){
        int mid = low + ((high - low)/2);

        int next = (mid+1)%n;
        int prev = (mid+n-1)%n;

        if(arr[mid] <= arr[next] && arr[mid] <= arr[prev]){
            return mid;
        }

        if(arr[mid] >= arr[low]){
            low = mid+1;
        }

        else if(arr[mid] <= arr[high]){
            high = mid-1;
    
    }
}