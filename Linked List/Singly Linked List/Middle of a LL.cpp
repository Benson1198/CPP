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

void middleNode(Node *head){
	if(head == NULL) return;

	Node *slow = head;
	Node *fast = head;

	while(fast != NULL && fast->next != NULL){
		slow = slow->next;
		fast = fast->next->next;
	}
	cout << slow->data << endl;
}

int main(){

}