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

vector <int> zigZagTraversal(Node* root)
{
	vector<int> ans;
   
   if(root == NULL){
        return ans;
   }
    
    stack <Node*> s1;
    stack <Node*> s2;

    s1.push(root);

    while(!s1.empty() || !s2.empty()){
        while(!s1.empty()){
            Node *curr = s1.top();
            s1.pop();

            ans.push_back(curr->data);
            
            if(curr->left)s2.push(curr->left);
            if(curr->right)s2.push(curr->right);
        }

        while(!s2.empty()){
            Node *curr = s2.top();
            s2.pop();

            ans.push_back(curr->data);

            if(curr->right)s1.push(curr->right);
            if(curr->left)s1.push(curr->left);
        }
    }
    
    return ans;
}