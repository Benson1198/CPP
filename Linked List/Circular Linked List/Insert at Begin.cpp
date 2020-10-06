Node *insertBegin(Node *head,int x){
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

		return temp;
	}
}


// Efficient way to insert at beginning in O(1) time

Node *insertBegin(Node *head,int x){
	

	if(head == NULL){
		Node *temp= new Node(x);
		temp->next = temp;
		return temp;
	}

	else{
		Node *temp= new Node(head->data);

		head->data = x;
		
		temp->next = head->next;
		head->next = temp;
		return head;
	}
}