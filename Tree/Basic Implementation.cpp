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


// Inorder Traversal
void inorder(Node *root){
    if(root != NULL){
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

// Preorder Traversal
void preorder(Node *root){
    if(root != NULL){
        cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);
    }
}


int main(){
    Node *root = new Node(10);
}