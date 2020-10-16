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


int getMax(Node *root){
    if(root == NULL){
        return INT_MIN;
    }
    else{
        return max(root->data,max(getMax(root->left),getMax(root->right)));
    }
}