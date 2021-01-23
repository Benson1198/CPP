#include <bits/stdc++.h>

using namespace std;

int main(){
    string s1 = "ABCD";
    string s2 = "CDAB";


    if(s1.length() != s2.length()){
        cout << "NO" << endl;
    }

    else{
        string temp = s1 + s1;

        if(temp.find(s2) != string :: npos){
            cout << "YES" << endl;
        }

        else{
            cout << "NO" << endl;
        }
    }

    
}