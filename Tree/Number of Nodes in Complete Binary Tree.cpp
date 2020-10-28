#include<bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;

    Node(int k){
        data = k;
        left = NULL;
        right = NULL;
    }
}


int countNodes(Node *root){
    int lh=0,rh=0;

    Node *curr = root;
    
    while(curr != NULL){
        lh++;
        curr = curr->left;
    }

    curr = root;

    while(curr != NULL){
        rh++;
        curr = curr->right;
    }

    if(rh == lh){
        return pow(2,lh);
    }

    else{
        return 1 + countNodes(root->left) + countNodes(root->right);
    }
}