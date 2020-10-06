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

// In this method we only need to trverse the LL once, and while traversing
// we create two seperate LL one for even and one for odd and in the end we connect them both


Node *segregate(Node *head){
	Node *eS = NULL, eE = NULL, oS = NULL, oE = NULL;

	for(Node *curr = head; curr!=NULL; curr = curr->next){
		int data = curr->data;

		if(data%2 == 0){
			if(eS == NULL){
				eS = curr;
				eE = eS;
			}
			else{
				eE->next = curr;
				eE = eE->next;
			}
		}
		else{
			if(oS == NULL){
				oS = curr;
				oE = oS;
			}
			else{
				oE->next = curr;
				oE = oE->next;
			}
		}
	}

	if(eS == NULL || oS == NULL){
		return;
	}

	eE->next = oS;
	oE->next = NULL:

	return eS;
}