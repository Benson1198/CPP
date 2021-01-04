#include<bits/stdc++.h>

using namespace std;



int main(){
    string g1, g2;

    cin >> g1;
    cin >> g2;

    int n1,n2;

    n1 = g1.length();
    n2 = g2.length();

    unordered_map <char,int> M;
    bool ans = false;
// if n1 is greater than n2
    if(n1 > n2){
        for(int i=0;i<n1;i++){
            if(M.find(g1[i]) == M.end()){
                M.insert(make_pair{g1[i],1});
            }

            else{
                M[g1[i]]++;
            }
        }

        for(int i=0;i<n2;i++){
            if(M.find(g2[i]) == M.end()){
                continue;
            }

            else{
                if(M[g2[i]]<0){
                    break;
                }
                else{
                    M[g2[i]]--;
                }
                
            }
        }
        ans = true;
    }

// if n2 is greater than n1

    else if(n2 > n1){
        for(int i=0;i<n2;i++){
            if(M.find(g2[i]) == M.end()){
                M.insert(make_pair{g2[i],1});
            }

            else{
                M[g2[i]]++;
            }
        }

        for(int i=0;i<n1;i++){
            if(M.find(g1[i]) == M.end()){
                continue;
            }

            else{
                if(M[g1[i]]<0){
                    break;
                }
                else{
                    M[g1[i]]--;
                }
                
            }
        }
        ans = true;
    }

    else{
        for(int i=0;i<n1;i++){
            if(M.find(g1[i]) == M.end()){
                M.insert(make_pair{g1[i],1});
            }

            else{
                M[g1[i]]++;
            }
        }

        for(int i=0;i<n2;i++){
            if(M.find(g2[i]) == M.end()){
                break;
            }

            else{
                if(M[g2[i]]<0){
                    break;
                }
                else{
                    M[g2[i]]--;
                }
                
            }

            ans = true;
        }
    }

    if(ans){
        cout << "YES" << endl;
    }
    else{
        cout << "NO"<< endl;
    }


    return 0;
}