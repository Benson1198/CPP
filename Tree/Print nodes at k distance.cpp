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


void printKDistance(Node *root, int k){
    if(root == NULL){
        return;
    }

    if(k==0){
        cout << root->data << " ";
    }

    else{
        printKDistance(root->left,k-1);
        printKDistance(root->right,k-1);
    }
}