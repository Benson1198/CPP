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

// Inorder Traversals

void inorder(Node *root){
    stack <Node *> st;

    Node *curr = root;

    while(curr != NULL || st.empty() == false){
        while(curr != NULL){
            s.push(curr);
            curr = curr->left;
        }

        curr = s.top();
        s.pop();
        cout << curr->data << " ";
        curr = curr->right;
    }
}


void preOrder(Node *root){
    if(root == NULL){
        return;
    }
    
    stack <Node *> st;

    st.push(root);

    while(st.empty() == false){
        Node *curr = st.top();
        cout << curr->data << " ";
        s.pop();

        if(curr->right != NULL){
            st.push(curr->right);
        }

        if(curr->left != NULL){
            st.push(curr->left);
        }
    }
}


// Space optimized Preorder Traversal
void preorderOpt(Node *root){
    stack <Node *> st;

    Node *curr = root;

    while(curr != NULL || st.empty() == false){
        while(curr != NULL){
            cout << curr->data << " ";
            if(curr->right != NULL){
                s.push(curr->right);
            }
            curr = curr->left;
        }

        if(st.empty() == false){
            curr = s.top();
            s.pop();
        }
    }
}

int main(){

}