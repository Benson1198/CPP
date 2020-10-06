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


void nthFromLast(Node *head,int n){
	Node *first = head;

	if(first == NULL){
		return;
	}

	for(int i=0;i<n;i++){
		if(first == NULL){
			return;
		}
		first = first->next;
	}

	Node *second = head;

	while(first != NULL){
		second = second->next;
		first = first->next;
	}

	cout << (second->data) << endl;
}

int main(){

}