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


// Method 1

// In this method we have to alternatively chggange the oreder (or direction) while printing
// the LeveOrder Line by Line Traversal



// Method 2

// This method uses two stacks

void spiralOrder(Node *root){
    if(root == NULL){
        return;
    }
    
    stack <Node*> s1;
    stack <Node*> s2;

    s1.push(root);

    while(s1.empty() == false || s2.empty() == false){
        while(s1.empty() == false){
            Node *curr = s1.top();
            s1.pop();

            cout << curr->data << " ";

            s2.push(curr->left);
            s2.push(curr->right);
        }

        while(s2.empty() == false){
            Node *curr = s2.top();
            s2.pop();

            cout << curr->data << " ";

            s1.push(curr->right);
            s1.push(curr->left);
        }
    }
    
}