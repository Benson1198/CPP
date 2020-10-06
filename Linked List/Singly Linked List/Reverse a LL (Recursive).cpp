#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node *next;

	Node(int x){
		data = x;
		next = NULL;
	}
}


Node *reverseRecursive1(Node *head){
	if(head == NULL || head->next == NULL){
		return head;
	}
	Node *rest_head = reverseRecursive1(head->next);
	
	Node *rest_tail = head->next;
	rest_tail->next = head;
	head->next = NULL;
	return rest_head;
}


// This recursive func. is similar to the iterative method
Node *reverseRecursive2(Node *curr, Node *prev){
	if(curr == NULL){
		return prev;
	}

	Node *next = curr->next;
	curr->next = prev;
	reverseRecursive2(next, curr);
}