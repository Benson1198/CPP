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


int maxWidth(Node *root){
    if(root == NULL){
        return 0;
    }

    int max_width = INT_MIN;
    
    queue <Node*> q;
    q.push(root);

    while(q.empty() == false){
        int count = q.size();

        max_width = max(max_width,count);

        for(int i=0;i<count;i++){
            Node *curr = q.top();
            q.pop();

            if(curr->left != NULL){
                q.push(curr->left);
            }
        
            if(curr->right != NULL){
                q.push(curr->right);
            }
        }
    }

    return max_width;
}