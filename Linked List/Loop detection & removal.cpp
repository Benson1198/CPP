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

void detectRemoveLoop(Node *head){
	Node *slow = head;
	Node *fast = head;

	while(fast != NULL && fast->nest != NULL){
		fast = fast->next->next;
		slow = slow->next;

		if(fast == slow)
			break;
	}

	if(slow != fast){
		return;
	}

	slow = head;
	while(slow->next != fast->next){
		slow = slow->next;
		fast = fast->next;
	}

	fast->next = NULL;
}


// Find the first node of the loop.
// Find the number of nodes in the loop or the length of the loop.