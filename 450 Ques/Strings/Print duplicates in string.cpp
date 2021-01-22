#include <bits/stdc++.h>

using namespace std;

int main(){
    string str = "geeksforgeeks";
    
    int arr[256];
    
    for(int i=0;i<256;i++){
        arr[i] = 0;
    }


    for(int i=0;i<str.length();i++){
        int temp = str[i];

        arr[temp]++;

    }

    for(int i=0;i<str.length();i++){
        if(arr[i] > 1){
            char t = arr[i];
            cout << t << " :" << arr[i] << endl;
        }
    }
    
    return 0;

}