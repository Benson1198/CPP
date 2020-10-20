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

void levelorderLBL(Node *root){
    if(root == NULL){
        return;
    }

    queue <Node *> q;
    q.push(root);
    q.push(NULL);

    while(q.size() > 1){
        Node *curr = q.top();
        q.pop();

        if(curr == NULL){
            cout << "\n";
            q.push(NULL);
            continue;
        }

        cout << curr->data << " ";

        if(curr->left != NULL){
            q.push(curr->left);
        }
        
        if(curr->right != NULL){
            q.push(curr->right);
        }
    }
}