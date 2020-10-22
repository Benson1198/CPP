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

// Naive Approach
// O(n^2)
int height(Node *root){
    if(root == NULL){
        return 0;
    }

    else{
        return max(height(root->left),height(root->right)) + 1;
    }
}

int diameter(Node *root){
    if(root == NULL){
        return 0;
    }

    int dl = 1 + height(root->left) + height(root->right);

    int d2 = diameter(root->left);
    int d3 = diameter(root->right);

    return max(d1,max(d2,d3));
}



// Space and Time Optimized Method

int res = 0;

int height(Node *root){
    if(root == NULL)return 0;

    int lh = height(root->left);

    int rh = height(root->right);

    res = max(res,(1+lh+rh));

    return 1+max(lh,rh);
}