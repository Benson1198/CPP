#include<bits/stdc++.h>

using namespace std;

struct Node{
    int key;
    Node *left;
    Node *right;

    Node(int k){
        key = k;
        left = NULL;
        right = NULL;
    }
}


// Method 1 - Naive Approach
bool findPath(Node *root, vector<int> &path, int k) 
{ 

    if (root == NULL) return false; 
  
    path.push_back(root->key); 
  
    if (root->key == k) 
        return true; 
  
    if ( (root->left && findPath(root->left, path, k)) || 
         (root->right && findPath(root->right, path, k)) ) 
        return true; 

    path.pop_back(); 
    return false; 
} 
  

int findLCA(Node *root, int n1, int n2) 
{ 

    vector<int> path1, path2; 
  
 
    if ( !findPath(root, path1, n1) || !findPath(root, path2, n2)) 
          return -1; 
  

    int i; 
    for (i = 0; i < path1.size() && i < path2.size() ; i++) 
        if (path1[i] != path2[i]) 
            break; 
    return path1[i-1]; 
} 




// Method 2 - Single traversal Method
// (This method assumes that both the nodes are present in the tree
// i.e this code will not work if one or both the nodes are not in the tree)

Node *lca(Node *root,int n1,int n2){
    if(root == NULL){
        return NULL;
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