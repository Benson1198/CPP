#include <bits/stdc++.h>

using namespace std;

void swap(char *a, char *b){
    char temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void permutations(string str,int l,int r,set<string> st){
    if(l==r){
        st.insert(str);
        return;
    }
    

    for(int i=l;i<=r;i++){
        swap(str[l],str[i]);
        permutations(str,l+1,r,st);
        swap(str[l],str[i]);
    }
}

void printUtil(set<string> st){
    for (auto it : st) 
        cout << it << " ";
}

int main(){
    int t;
    cin >> t;

    while(t>0){
        string str;
        set<string> st;
        getline(cin,str);
        int n = str.length();

        permutations(str,0,n-1,st);

        printUtil(st);
        t--;
    }
    return 0;
}