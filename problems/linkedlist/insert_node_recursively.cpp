#include <iostream>
using namespace std;

class Node {
   public:
    int data;
    Node *next;
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

Node* insertNode(Node *head, int pos, int data) {
    
	if(head==NULL)
	{
		if(pos==0)
		{
			Node *newnode = new Node(data);
			return newnode;
		}
		return head;
	}

	if(pos==0)
	{
          Node *newnode = new Node(data);
          newnode->next = head;
          head = newnode;
          return head;
	}
	head->next = insertNode(head->next,pos-1,data);
	return head;
}

Node *takeinput() {
    int data;
    cin >> data;
    Node *head = NULL, *tail = NULL;
    // terminating ll when data is -1;
    while (data != -1) {
        Node *newNode = new Node(data);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
        cin >> data;
    }
    return head;
}

void print(Node *head) {
    Node *temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << "\n";
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        Node *head = takeinput();
        int pos, data;
        cin >> pos >> data;
        head = insertNode(head, pos, data);
        print(head);
    }
}