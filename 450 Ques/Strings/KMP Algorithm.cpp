#include<bits/stdc++.h>

using namespace std;

void LPSarrayUtil(char *pat,int m,int *lps){
    int len=0;

    lps[0] = 0;

    int i=1;

    while(i<m){
        if (pat[i] == pat[len]) { 
            len++; 
            lps[i] = len; 
            i++; 
        }

        else 
        { 
            if (len != 0) { 
                len = lps[len - 1]; 
            } 
            else
            { 
                lps[i] = 0; 
                i++; 
            } 
        }
    }
}

void KMPSearch(char *pat,char *txt,vector<int> &ans){
    int n = strlen(txt);
    int m = strlen(pat);

    int lps[m];

    LPSarrayUtil(pat,m,lps);

    int i=0;
    int j=0;

    while(i<n){
        if(pat[i] == txt[j]){
            i++;
            j++;
        }

        if(j==m){
            ans.emplace_back(i-j);
            j = lps[j-1];
        }

        else if(i<n && pat[i] != txt[j]){
            if(j != 0){
                j = lps[j-1];
            }
            else{
                i++;
            }
        }
    }

}

int main(){
    char txt[] = "ABABDABACDABABCABAB"; 
    char pat[] = "ABABCABAB"; 
    
    vector<int> ans;
    KMPSearch(pat, txt,ans); 
    
    for(int i=0;i<ans.size();i++){
        cout << i << " ";
    }

    return 0;
}