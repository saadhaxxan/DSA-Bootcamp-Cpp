#include <bits/stdc++.h>

using namespace std;

class Node{
public:
	int data;
	Node* next;

	Node(int data){
		this->data=data;
		this->next = NULL;
	}
};

void print(Node* &head){
	if (head == NULL){
		cout<<"List is empty"<<endl;
		return;
	}
	Node *temp = head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<endl;
}

// 10-> NULL 
// 20->10->NULL

void insertAtHead(Node* &head, int d){
	Node *newNode = new Node(d); // 20 Node
	newNode->next = head; // 20->10
	head = newNode; // 20 
}


// 30->20->10->40->NULL

void insertAtTail(Node* &tail, int d){
	Node *newNode = new Node(d); // 40 Node
	tail->next = newNode; // 30->20->10->40
	tail = newNode; // 30->20->10->40->NULL
}


// 30->20->10->40->NULL
// 
void DeleteNode(Node* &head, int pos){
	if (pos==1){
		Node* temp = head;
		head = head->next; // 30 -> 20 = head
		temp->next = NULL;
		delete temp;
	}

	Node *curr = head;
	Node *prev = NULL;

	int count=1;

	while(count<pos){
		prev=curr;
		curr = curr->next;
		count++;
	}
	// curr = 10;
	// prev = 20;

	prev->next = curr->next;
	curr->next = NULL;
	delete curr;

}


// 30->20->10->40->NULL
// 30->20->
// 50->
// 10->40->NULL
// insert an element at a specific position in a linkedlist 
// contrainsts
// the position will not be 0 or n-1
void insertAtPosition(Node* &head,Node* &tail, int d, int pos){
	// pos = 1 means insert at head
	// if(pos==1){
	// 	insertAtHead(head,d);
	// 	return;
	// }

	Node *temp = head;
	int count=1;

	while(count<pos-1){
		temp= temp->next;
		count++;
	}
	// temp = 20
	// if (temp->next==NULL){
	// 	insertAtTail(tail,d);
	// 	return;
	// }

	Node *newNode = new Node(d); // 50 
	newNode->next = temp->next; 	// 30->20->50->10->40->NULL
	// 50->		  = 10	
	temp->next = newNode; // 20->50
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	Node* Node1 = new Node(10);
	Node *head = Node1;
	Node *tail = Node1;
	// Node* Node2 = new Node(30);
	insertAtHead(head,20);
	insertAtHead(head,30);
	insertAtTail(tail,40);
	print(head);
	return 0;
}
