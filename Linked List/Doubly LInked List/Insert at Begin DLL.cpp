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


Node *insertBegin(Node *head,int x){
	Node *temp = new Node(x);
	if(head == NULL){
		return temp;
	}
	
	temp->next = head;
	head->prev = temp;

	return temp;
}


int main(){

}