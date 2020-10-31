#include <bits/stdc++.h>
using namespace std;

bool isPresent(int arr[], int n, int sum)
{
    int l = 0, h = n-1;
    int mid;
    while(l <= h)
    {
        if(arr[l] + arr[h] == sum)
          return true;
        else if(arr[l] + arr[h] > sum)
             h--;
        else l++;
    }
    return false;
}