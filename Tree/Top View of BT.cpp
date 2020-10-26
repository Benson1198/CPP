#include<bits/stdc++.h>

using namespace std;

struct Node{
    int key;
    Node *left;
    Node *right;

    Node(int k){
        key = k;
        left = NULL;
        right = NULL;
    }
}


void filledMap(Node *root,int d,int l,map<int, pair<int,int>> &m){
    if(root == NULL){
        return;
    }

    if(m.count(d) == 0){
        m[d] = make_pair(root->data,l)
    }
    else if(m[d].second>l){ 
        m[d] = make_pair(root->data,l); 
    }

    filledMap(root->left,d-1,l+1,m);
    filledMap(root->right,d+1,l+1,m);
}

void topView(struct Node *root){ 
  
    map<int,pair<int,int>> m; 
  

    fillMap(root,0,0,m); 
  
    for(auto it=m.begin();it!=m.end();it++){ 
        cout << it->second.first << " "; 
    } 
}