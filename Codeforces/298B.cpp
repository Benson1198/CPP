#include<bits/stdc++.h>

using namespace std;

int main(){
    int t,sx,sy,ex,ey;
    cin >> t >> sx >> sy >> ex >> ey;

    string s;
    cin >> s;

    int dx = ex - sx;
    int dy = ey - sy;
    
    int i;

    for(i=0;i<t;i++){
        if(dx < 0 && s[i] == 'W'){
            dx++;
        }

        if(dx > 0 && s[i] == 'E'){
            dx--;
        }

        if(dy < 0 && s[i] == 'S'){
            dy++;
        }

        if(dy > 0 && s[i] == 'N'){
            dy--;
        }

        if(dx == 0 && dy == 0){
            break;
        }
    }

    if(dx == 0 && dy == 0){
        cout << i+1 << endl;
    }

    else{
        cout << -1 << endl;
    }
}