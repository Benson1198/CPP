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


// Recursive method

Node *reverseK(Node *head,int k){
	Node *curr = head;
	Node *prev = NULL,*next = NULL;
	int count=0;
	while(curr!= NULL && count<k){
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
		count++;
	}

	if(next!= NULL){
		Node *rest_head = reverseK(next,k);
		head->next = rest_head;
	}
	return prev;
}



// Iterative Method (More space efficient)
Node *reversekItr(Node *head,int k){
	Node *curr = head, *prevFirst = NULL;
	bool isfirstPass = true;
	while(curr != NULL){
		Node *first = curr, prev = NULL;
		int count=0;
		while(curr!= NULL && count<k){
		Node *next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
		count++;
	}
	if(isfirstPass){
		head = prev;
		isfirstPass = false;
	}

	else{
		prevFirst->next = prev;
	}
	prevFirst = first;
	
	}

	return head;
}
