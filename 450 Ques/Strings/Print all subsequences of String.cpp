#include<bits/stdc++.h>
using namespace std;

int subsequences(string str, string output[]){
    if(str.length() == 0){
        output[0] = "";
        return 1;
    }

    int smallerOpSize = subsequences(str.substr(1),output);

    for(int i=0;i<smallerOpSize;i++){
        output[smallerOpSize + i] = str[0] + output[i];
    }

    return 2*smallerOpSize;
}

int main(){
    string output[1000];

    string str = "abcd";

    int outputSize = subsequences(str,output);

    for(int i=0;i<outputSize;i++){
        cout << output[i] << endl;
    }
}