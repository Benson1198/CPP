#include<bits/stdc++.h>

using namespace std;

int balanceStr(string str){
    int ans = 0,res;
    int len = str.length();

    if(len == 1){
        return -1;
    }

    if(str[0] == '0'){
        res = 1;
    }
    else{
        res = -1;
    }

    for(int i=1;i<len;i++){
        if(str[i] == '1')
            res--;
        else
            res ++;

        if(res == 0)
            ans++;
    }

    if(ans == 0){
        return -1;
    }

    return ans;
}

int main(){
    string str;
    getline(cin,str);

    cout << balanceStr(str) << endl;

    return 0;
}