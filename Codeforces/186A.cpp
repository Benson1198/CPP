#include<bits/stdc++.h>

using namespace std;

int main(){
    string g1, g2;

    cin >> g1;
    cin >> g2;

    int n1,n2;

    n1 = g1.length();
    n2 = g2.length();

    int mismatch = 0;
    vector<int> pos;

    if(n1 != n2){
        cout << "NO" << endl;
    }

    else{
        for(int i=0;i<n1;i++){
            if(g1[i] != g2[i]){
                mismatch++;
                pos.push_back(i);
            }
        }

        if(mismatch != 2){
            cout << "NO" << endl;
        }

        else{
            if(g1[pos[0]] == g2[pos[1]] && g2[pos[0]] == g1[pos[1]]){
                cout << "YES" << endl;
            }

            else{
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}