#include<bits/stdc++.h>

using namespace std;

// Iterative Solution
int binSearchItr(int arr[],int n,int k){
    int low = 0, high = n-1;

    while (low <= high)
    {
        int mid = low + (high-low)/2;

        if(arr[mid] == k){
            return mid;
        }
        else if(arr[mid] > k){
            high = mid-1;
        }

        else{
            low = mid+1;
        }
    }

    return -1
    
}


// Recursive Solution
int binSearchRec(int arr[],int low, int high,int k){
    
    if(low > high){
        return -1;
    }

    int mid = (low+high)/2;

    if(arr[mid] == k){
        return mid;
    }

    if (arr[mid] > k){
        return binSearchRec(arr,low,mid-1,k);
    }

    else if(arr[mid] < k){
        return binSearchRec(arr,m+1,high,k);
    }
}

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    
    int n = 7;
    
    int i = binSearch(arr,n,3);
    
    cout << i << endl;
    
    return 0;
}