#include <bits/stdc++.h>
using namespace std;

char nextAlphabet(int arr[],int n,char x){
    char res = "#";
    int low = 0, high = n-1;

    while(low <= high){
        int mid = low + (high - low)/2;

        if(arr[mid] == x){
            low = mid+1;
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