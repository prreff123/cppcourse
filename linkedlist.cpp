#include<iostream>
using namespace std;
// Linked List

class Node{
	public:
		int data;
		Node *next;
		
		Node(int data){
			this->data=data;
			this->next=NULL;
		}
};

Node* takeinput(){
	Node* head = NULL;
	Node* tail = NULL;
	int data;
	cin>>data;
	if(data==-1){
		return NULL;
	}
	while(data!=-1){
		Node* newnode = new Node(data);
		if(head==NULL){
			head = newnode;
			tail = newnode;
		}
		else{
			tail->next = newnode;
			tail = newnode;
		}
		cin>>data;
    }
    return head;
}

void print(Node* head){
	Node* temp = head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
    }
}

int main(){
	// 0 1 2 3 4
	Node* newnode0 = new Node(0);
	Node* newnode1 = new Node(1);
	Node* newnode2 = new Node(2);
	Node* newnode3 = new Node(3);
	Node* newnode4 = new Node(4);
	
	//0->1
	newnode0->next = newnode1;
	//1->2
	newnode1->next = newnode2;
	//2->3
	newnode2->next = newnode3;
	
	//3->4
	newnode3->next = newnode4;
	Node* head = takeinput();
	print(head);
	
	return 0;
}