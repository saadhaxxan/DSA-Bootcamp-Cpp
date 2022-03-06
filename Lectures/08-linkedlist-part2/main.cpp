#include <bits/stdc++.h>

using namespace std;

class Node{
public:
	int data;
	Node* next;
	Node* prev;

	Node(int data){
		this->data=data;
		this->next = NULL;
		this->prev = NULL;
	}
};

// Given a Linked list print its length

int getLength(Node* &head){
	int len=0;
	Node* temp = head;
	while(temp!=NULL){
		len++;
		temp = temp->next;
	}
	return len;
}

// Whenever you are given linked list always draw it on paper 
// before solving
// 1->3->4->8->9->12
// After insertion
// 7->1->3->4->8->9->12
// 1. Create a new Node called newNode 7
// 2. newNode->1 = 7->1
// 3. 7<-1 = head->prev = newNode
// 4. head = newNode = 7

void insertAtHead(Node* &head,Node* &tail,int d){
	if (head==NULL){
		Node* newNode = new Node(d); // step 1
		head = newNode;
		tail = newNode;
	}
	else{
		Node* newNode = new Node(d); // step 1
		newNode->next = head; // step 2
		head->prev = newNode; // step 3
		head = newNode; // step 4
	}
}

void insertAtTail(Node* &tail,Node* &head,int d){
	if (tail==NULL){
		Node* newNode = new Node(d); // step 1
		tail = newNode;
		head = newNode;
	}
	else{
		Node* newNode = new Node(d); // step 1
		tail->next = newNode;
		newNode->prev = tail;
		tail = newNode; // step 4
	}
}


void insertAtPosition(Node* &tail,Node* &head,int d,int pos){
	
	if(pos==1){
		insertAtHead(head,tail,d);
		return;
	}

	Node* newNode = new Node(d);

	Node* temp = head;
	int cnt = 1;

	while(cnt<pos-1){
		temp = temp->next;
		cnt++;
	}
	if(temp->next == NULL){
		insertAtTail(tail,head,d);
		return;
	}
	newNode->next = temp->next;
	temp->next->prev = newNode;
	temp->next = newNode;
	newNode->prev = temp;
}

void print(Node* head){
	Node *temp = head;
	if (temp == NULL){
		cout<<"List is empty"<<endl;
		return;
	}
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<endl;
}

int main()
{

	// Node* node1 = new Node(7); // simply creates a Node
	Node* head = NULL;
	Node* tail = NULL;
	
	print(head);
	cout<<getLength(head)<<endl;


	insertAtHead(head,tail,8);
	print(head);
	cout<<getLength(head)<<endl;

	insertAtHead(head,tail,9);
	print(head);
	cout<<getLength(head)<<endl;

	insertAtHead(head,tail,10);
	print(head);
	cout<<getLength(head)<<endl;

	insertAtTail(tail,head,12);
	print(head);
	cout<<getLength(head)<<endl;
	

	return 0;
}
