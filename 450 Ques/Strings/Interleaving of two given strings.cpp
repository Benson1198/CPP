#include<bits/stdc++.h>

using namespace std;

bool isInterleaved(string s1, string s2, string s3)  
{  
    int n1,n2,n3;

    n1 = s1.length();
    n2 = s2.length();
    n3 = s3.length();

    if((n1+n2) != n3){
        return false;
    }

    else{
        int a=0,b=0,c=0;

        while(c != (n3-1)){
            if(s3[c] == s1[a]){
                a++;
            }
            else if(s3[c] == s2[b]){
                b++;
            }
            else{
                return false;
            }
            c++;
        }
        return true;
    }
}

int main(){
    cin.sync();
    cin.ignore();
    string s1,s2,s3;

    getline(cin,s1);
    cin.ignore();
    getline(cin,s2);
    getline(cin,s3);

    cout << isInterleaved(s1,s2,s3) << endl;

    return 0;
    
}