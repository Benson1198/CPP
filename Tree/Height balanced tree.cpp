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


// Naive Solution (By using the height function for every node 
// i.e left and right subtree of every node)
// This is O(n^2) solution 

int height(Node *root){
    if(root == NULL){
        return 0;
    }

    else{
        return max(height(root->left),height(root->right)) + 1;
    }
}

bool isBalanced1(Node *root){
    if(root == NULL){
        return true;
    }

    int lh = height(root->left);
    int rh = height(root->right);

    return (abs(lh-rh <= 1) && isBalanced1(root->left) 
            && isBalanced1(right->right));
}



// Optimized solution (Note: This function returns -1 when unbalanced 
// and 0 or >0 in case of balanced [basically returns the height of tree if it is balanced])

int isBalanced2(Node *root){
    if(root == NULL){
        return 0;
    }

    int lh = isBalanced2(root->left);
    if(lh == -1){
        return -1;
    }

    int rh = isBalanced2(root->right);
    if(rh == -1){
        return -1;
    }

    if(abs(lh-rh) > 1) return -1;

    else{
        return max(lh,rh) +1;
    } 
}