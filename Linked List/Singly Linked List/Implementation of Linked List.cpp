// Simple Implementation of Linked List
#include<iostream>
using namespace std;


struct Node{
	int data;
	Node *next;

	Node(int x){
		data = x;
		next = NULL;
	}
}

int main(){
	Node *head = new Node(10);

	head->next = new Node(20);
	head->next->next = new Node(30);

	return 0;
}


// Function to traverse and print the Linked List
void printList(Node *head){
	Node *temp = head;
	
	while(temp->next != NULL){
		cout << temp->data << " ";
		temp = temp->next;
	}
}

void printRec(Node *head){
	if(head == NULL){
		return;
	}
	
	cout << head->data << " ";
	printRec(head->next);
}


// Function to search key in the Linked List
int searchLL(Node*head, int x){
	int count = 0
	Node *curr = head;

	while(curr->next != NULL){
		if(curr->data == x){
			return count;
		}
		count++;
		curr = curr->next;
	}
	return -1;
}


// Function to insert at the beginning
Node *insertBegin(Node *head,int x){
	Node *temp = new Node(x);
	temp->next = head;
	return temp;
}

int main(){
	Node *head = NULL;

	head = insertBegin(head,30);
	head = insertBegin(head,20);
	head = insertBegin(head,10);

	return 0;
}


// Function to insert at the end
Node *insertEnd(Node *head,int x){
	Node *temp = new Node(x);

	if(head == NULL){
		return temp;
	}

	Node *curr = head;
	while(curr->next !=NULL){
		curr = curr->next;
	}

	curr->next = temp;
	return head;
}

int main(){
	Node *head = NULL;

	head = insertEnd(head,30);
	head = insertEnd(head,20);
	head = insertEnd(head,10);

	return 0;
}



// Function to delete the head node of LL
Node *delHead(Node *head){
	if(head == NULL){
		return NULL;
	}
	else{
		Node *temp = head->next;
		delete head;
		return temp 
	}
}


// Function to delete Tail of the LL
Node *delTail(Node *head){
	if(head == NULL){
		return NULL;
	}
	if(head->next == NULL){
		return NULL;
	}

	else{
		Node *curr = head;
		while(curr->next->next != NULL){
			curr = curr->next;
		}
		delete curr->next;
		curr->next = NULL;
		return head; 
	}
}


// Function to insert node at given position
Node *insertPos(Node *head, int pos, int data){
	Node *temp = new Node(data);
	
	if(pos = 1){
		temp->next = temp;
		return temp;
	}

	Node *curr = head;
	for(int i =1;i<=pos-2 && curr!=NULL;i++){
		curr = curr->next;
	}
	
	if(curr== NULL){
		return head;
	}

	temp->next = curr->next;
	curr->next = temp;
	return head;
}