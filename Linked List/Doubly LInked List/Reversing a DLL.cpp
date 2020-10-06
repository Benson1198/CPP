#include<bits/stdc++.h>
using namespace std;


struct Node(){
	int data;
	Node *prev;
	Node *next;

	Node(int x){
		data = x;
		prev = next = NULL;
	}
}


Node *reverse(Node *head){
	if(head == NULL || head->next == NULL){
		return head;
	}
	
	
	Node *prev = NULL, *curr = head;;

	Node *temp;
	while(curr!= NULL){
		prev = curr->prev;
		curr->prev = curr->next;
		curr->next = prev;
		curr = curr->prev;
	}
	return prev;
}


int main(){

}