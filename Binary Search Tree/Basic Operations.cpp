// Insert operation (Recursive Method)

Node *insert(Node *root,int val){
    if(root == NULL){
        return new Node(val);
    }

    else if(val < root->data){
        root->left = insert(root->left,val);
    }

    else if(val > root->data){
        root->right = insert(root->right,val);
    }

    return root;
}


// Deletion Operation
Node *getSuccessor(Node *curr){
    curr = curr->right;
    while(curr != NULL && curr->left  != NULL){
        curr = curr->left;
    }

    return curr;
}

Node *delNode(Node *root,int x){
    if(root == NULL){
        return root;
    }

    else if( x < root->data){
        root->left = delNode(root->left,x);
    }

    else if(x > root->data){
        root->right = delNode(root->right,x);
    }

    else{
        if(root->left == NULL){
            Node *temp = root->right;
            delete root;
            return temp;
        }

        else if(root->right == NULL){
            Node *temp = root->left;
            delete root;
            return temp;
        }

        else{
            Node *succ = getSuccessor(root);
            root->data = succ->data;
            root->right = delNode(root->right,succ->data);
        }
    }

    return root;
}
