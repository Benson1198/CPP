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

Node *prev = NULL;

Node *BTToDLL(Node *root){
    if(root == NULL){
        return root;
    }

    Node* head = BTToDLL(root->left);

    if(prev == NULL){
        head = root;
    }

    else{
        root->left = prev;
        prev->right = root;
    }

    prev = root;
    BTToDLL(root->right);
    return head;
}