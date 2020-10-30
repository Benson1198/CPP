#include<bits/stdc++.h>

using namespace std;


// This approach mainly uses the binary search functions -> First Occurance & Last Occurance 
// of a number in a sorted array

int firstOcr(int arr[],int n,int x){
    int low=0, high=n-1;

    while(low<=high){
        int mid = (high-low)/2;

        if(arr[mid] > x){
            high =  mid-1;
        }

        else if(arr[mid] < x){
            low = mid+1;
        }

        else{
            if(mid == 0 || arr[mid-1] != arr[mid]){
                return mid;
            }
            else{
                high = mid-1;
            }
        }
    }
    return -1;
}


int lastOcr(int arr[],int n,int x){
    int low=0, high=n-1;

    while(low<=high){
        int mid = (high-low)/2;

        if(arr[mid] > x){
            high =  mid-1;
        }

        else if(arr[mid] < x){
            low = mid+1;
        }

        else{
            if(mid == n-1 || arr[mid+1] != arr[mid]){
                return mid;
            }
            else{
                low = mid+1;
            }
        }
    }
    return -1;
}



// Main Function

int countOcr(int arr[],int n,int x){
    int first = firstOcr(arr,n,x);

    if(first == -1){
        return 0;
    }

    else{
        return (lastOcr(arr,n,x) - first +1);
    }
}

int main(){

}