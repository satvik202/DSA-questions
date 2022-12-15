#include <iostream>
using namespace std;

class Node
{
public:
	int data;
	Node *next;
	Node(int data)
	{
		this->data = data;
		this->next = NULL;
	}
};

Node *mergeTwoSortedLinkedLists(Node *head1, Node *head2)
{
	Node*x= new Node(NULL);
	Node*y=x;
	if(head1==NULL){
		return head2;
	}
	if(head2==NULL){
		return head1;
	}
	Node* ptr1=head1;
	Node* ptr2= head2;
	while(ptr1&& ptr2){
		if(ptr1->data<=ptr2->data){
			x->next=ptr1;
			ptr1=ptr1->next;
			x=x->next;
		}
		else{
			x->next=ptr2;
			ptr2=ptr2->next;
			x=x->next;
		}
	}
	if(ptr1!=NULL){
		x->next=ptr1;
	}
		if(ptr2!=NULL){
		x->next=ptr2;
	}

	return y->next;
}
