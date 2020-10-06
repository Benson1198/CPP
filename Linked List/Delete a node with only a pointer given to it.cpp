#include<bits/stdc++.h>

using namspace std;

struct Node{
	int data;
	Node *next;

	Node(int x){
		data = x;
		next = NULL;
	}
}

// This is a tricky interview question.

void deleteNode(Node *ptr){

	if(ptr->next == NULL){
		delete ptr;
	}

	Node *temp = ptr->next;
	ptr->data = temp->data;
	ptr->next = temp->next;
	delete temp;
}