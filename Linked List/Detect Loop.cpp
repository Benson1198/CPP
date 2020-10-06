#include<bits/stdc++.h>

using namspace std;

// struct Node{
// 	int data;
// 	Node *next;

// 	Node(int x){
// 		data = x;
// 		next = NULL;
// 	}
// }

// First way to detct loop is to modify the structure of the Node itself 
// i.e. we add a visited boolean variable in the Node structure.
struct Node{
	int data;
	bool visited;
	Node *next;

	Node(int x){
		data = x;
		next = NULL;
		visited = false;
	}
}

// Method: 2 In this method we create a Dummy Node and while trversing the Lisnked List we change the next pointer of 
// each visited node to point at this dummy node. Now while traversing if a node points to this dummy node
// this means their exists a node.
// But this method in a way destroys the linked list.


bool isLoop(Node *head){
	Node *temp = new Node(-1);
	Node *curr = head;
	while(curr != NULL){
		if(curr->next = NULL){
			return false;
		}
		if(curr->next == temp){
			return true;
		}
		Node *curr_next = curr->next;
		curr->next = temp;
		curr = curr_next;
	}
	return false;
}


// Method 3: Using a Hash Map to store the data of each visited node 
// and then while traversing checking for each node whether it is in the hash map or not.

bool isLoop2(Node *head){
	unordered_set<Node *>s;

	for(Node *=head;curr!= NULL;curr=curr->next){
		if(s.find(curr) != s.end()){
			return true;
		}

		s.insert(curr);

	}
	return false;
}


// Method 4: Floyd's Cycle Detection method 
// (This method doesn't even require a O(n) auxiliary space)

// In this method we basically use trwo pointers:
// 1) slow pointer 
// 2) fast pointer
// accordiung to this algorithm is a loop exists in the LL then these two 
// pointers will definitely meet at some time.

// This is by far the best method.

bool isLoop3(Node *head){
	
	Node *slow = head;
	Node *fast = head;

	while(fast != NULL && fast->nest != NULL){
		fast = fast->next->next;
		slow = slow->next;

		if(fast == slow)
			return true;
	}

	return false;
}