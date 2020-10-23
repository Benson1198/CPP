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


// Method 1 - Naive Approach




// Method 2 - Single traversal Method
// (This method assumes that both the nodes are present in the tree
// i.e this code will not work if one or both the nodes are not in the tree)

Node *lca(Node *root,int n1,int n2){
    if(root == NULL){
        retrun NULL;
    }

    if(root->key == n1 || root->key == n2){
        return root;
    } 

    Node *lca1 = lca(root->left,n1,n2);
    Node *lca2 = lca(root->right,n1,n2);

    if(lca1 != NULL && lca2 != NULL){
        return root;
    }

    if(lca1 != NULL){
        return lca1;
    }
    else{
        return lca2;
    }
}