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


// Method to Serialize a Binary Tree

const int EMPTY = -1;

void serialize(Node *root,vector<int> &arr){
    if(root == NULL){
        arr.push_back(EMPTY);
        return;
    }

    arr.push_back(root->data);
    serialize(root->left,arr);
    serialize(root->right,arr);
}