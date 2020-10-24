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


// Method to Deserialize a Binary Tree

const int EMPTY = -1;
int index = 0;

Node *deserialize(vector<int> &arr){
    if(index == arr.size()) return NULL;

    int val = arr[index];
    index++;

    if(val == EMPTY) return NULL;

    Node *root = newNode(val);
    root->left = deserialize(arr);
    root->right = deserialize(arr);

    return root;
}