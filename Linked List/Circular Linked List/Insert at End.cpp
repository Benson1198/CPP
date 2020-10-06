Node *insertEnd(Node *head,int x){
	Node *temp= new Node(x);

	if(head == NULL){
		temp->next = temp;
		return temp;
	}

	else{
		Node *curr = head;
		while(curr->next != head){
			curr = curr->next;
		}
		curr->next = temp;
		temp->next = head;
		return head;  
	}
}


// Efficient solution O(1) time complexity

Node *insertEnd2(Node *head,int x){
	Node *temp= new Node(x);

	if(head == NULL){
		temp->next = temp;
		return temp;
	}

	else{
		temp->next = head->next;
		head->next =temp;
		int t = temp->data;
		temp->data = head->data;
		head->data = t;
		return temp;
	}
}
