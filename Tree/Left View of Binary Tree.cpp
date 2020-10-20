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

// Recursive Method



// Iterative Method
void printLeft(Node *root){
    if(root == NULL){
        return;
    }

    queue <Node*> q;
    q.push(root);

    while(q.empty() == false){
        int count = q.size();

        for(int i=0;i<count;i++){
            Node *curr = q.top();
            q.pop();

            if(i==0){
                cout << curr->data << " ";
            }
            
            if(curr->left != NULL){
                q.push(curr->left);
            }
        
            if(curr->right != NULL){
                q.push(curr->right);
            }
        }

        cout << "\n";
    }
}