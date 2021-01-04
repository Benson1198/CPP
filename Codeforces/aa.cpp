
#include<bits/stdc++.h>

using namespace std;


bool isPowerOfTwo(int x) 
{ 
    return x && (!(x&(x-1))); 
} 

bool isSumofTwosPower(int n) {
   if((n & 1) == 0){
      return true;
   } else {
      return false;
   }
}

int main(){
    int n,sum = 0;

    cin >> n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    for(int i=0;i<n;i++){
        if(isPowerOfTwo(arr[i]) || isSumofTwosPower(arr[i])){
            sum += arr[i];
        }
    }


    cout << sum;
}