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


// Method 1 (By pushing a NULL into the queue after completing every level)

void levelorderLBL1(Node *root){
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


// Method 2 (By running two loops)

void levelorderLBL2(Node *root){
    if(root == NULL){
        return;
    }

    queue <Node*> q;
    q.push(root);

    while(q.empty() == false){
        int count = q.size();

        for(int i=0;i<count;i++){
            Node *curr = q.front();
            q.pop();

            cout << curr->data << " ";

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