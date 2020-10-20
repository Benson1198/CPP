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

bool isSum(Node *root){
    if(root == NULL){
        return true;
    }

    if(root->left == NULL && root->right == NULL){
        return true;
    }

    int sum = 0;

    if(root->left != NULL){
        sum += root->left->data;
    }
    if(root->right != NULL){
        sum += root->right->data;
    }

    return (root->data == sum && isSum(root->left)
            && isSum(root->right));
}