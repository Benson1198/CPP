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


int sizeOfTree(Node *root){
    if(root == NULL){
        return 0;
    }

    else{
        return 1 + sizeOfTree(root->left) + sizeOfTree(root->right);
    }
}