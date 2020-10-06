Node *deleteHead(Node *head){
	
	if(head == NULL){
		return NULL;
	}

	if(head->next == NULL){
		delete head;
		return NULL;
	}

	Node *curr = head;
	while(curr->next != head){
		curr = curr->next;
	}
	curr->next = head->next;
	delete head;
	return(curr->next);
}


// Efficient method O(1) time complexity

Node *deleteHead2(Node *head){
	
	if(head == NULL){
		return NULL;
	}

	if(head->next == NULL){
		delete head;
		return NULL;
	}
}
