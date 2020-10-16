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

void levelOrder(Node *root){
    queue <Node*> q;

    if(root == NULL){
        return;
    }

    q.push(root);

    while(q.empty() == false){
    
        Node *temp = q.front();
        q.pop();
        cout << temp->data << " ";
        if(temp->left != NULL){
            q.push(temp->left);
        }
        if(temp->right != NULL){
            q.push(temp->right);
        }
    }
}