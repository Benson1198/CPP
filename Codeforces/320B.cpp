#include<bits/stdc++.h>

using namespace std;

int main(){
    string num;
    cin >> num;

    int n = num.length();

    bool ans = true;

    for(int i = 0;i<n;i++){
        if(num[i] != '1' || num[i] != '4'){
            ans = false;
            break;
        }

        if(i+1 < n){
            if(num[i+1] != '1' || num[i+1] != '4'){
                ans = false;
                break;
            }
        }

        if(i+2 < n){
            if(num[i+2] != '1' || num[i+2] != '4'){
                ans = false;
                break;
            }
        }
    }

    if(ans == false){
        cout << "NO";
    }
    else{
        cout << "YES";
    }
}
