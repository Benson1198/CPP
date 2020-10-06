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

Node *srtInsert(Node *head, int data){
	Node *temp = new Node(data);
	if(head == NULL){
		return temp
	}

	else if(head->data > data){
		temp->next = head;
		return temp;
	}

	Node *curr = head;
	while(curr->next != NULL){
		if(curr->next->data > temp->data){
			temp->next = curr->next;
			curr->next = temp;
			return head;
		}
		curr = curr->next
	}	
}