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


int height(Node *root,int count){
    if(root == NULL){
        return 0;
    }

    else{
        return max(height(root->left),height(root->right)) + 1;
    }
}