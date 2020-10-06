void printList(Node *head){
	if(head == NULL){
		return;
	}

	cout << head->data << " ";

	for(Node *p = head->next;p != head;p->next){
		cout <<(p->data)<< " ";
	}
}


void printList2(Node *head){
	if(head == NULL){
		return;
	}

	Node *p = head->next;	

	do{
		cout <<(p->data) << " ";
		p->next
	} while(p != head);

}