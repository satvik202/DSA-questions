#include <iostream>
#include <queue>
#include <vector>
using namespace std;

template <typename T>
class Node {
   public:
    T data;
    Node<T> *next;
    Node(T data) {
        this->data = data;
        this->next = NULL;
    }
};

template <typename T>
class BinaryTreeNode {
   public:
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

vector<Node<int>*> constructLinkedListForEachLevel(BinaryTreeNode<int> *root) {
    // Write your code here
	if(root==NULL){
		return {NULL};
	}
	vector<Node<int>*>v;
	queue<BinaryTreeNode<int> *>q;
	q.push(root);
	q.push(NULL);
	Node<int>* head=NULL;
	Node<int>* tail= NULL;
	while(q.size()){
		BinaryTreeNode<int>* front= q.front();
		q.pop();
		if(front==NULL){
			if(q.size()==0)
			return v;
			else{
				head=NULL;
				tail=NULL;
				q.push(NULL);
			}
		}
		else{
			Node<int>* temp = new Node<int>(front->data);
			if(head==NULL){
				head= temp;
				tail=temp;
				v.push_back(head);
			}
			else{
				tail->next= temp;
				tail=tail->next;
			}
			if(front->left)
			q.push(front->left);

			if(front->right)
			q.push(front->right);
		}

		}
	}