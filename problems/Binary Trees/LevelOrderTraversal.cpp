#include <bits/stdc++.h>
using namespace std;

template <typename T>
class BinaryTreeNode {
   public:
    T data;
    BinaryTreeNode<T>* left;
    BinaryTreeNode<T>* right;

    BinaryTreeNode(T data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};


void printLevelWise(BinaryTreeNode<int> *root) {
    // Write your code here
	if(root==NULL)
	return;

	queue<BinaryTreeNode<int>*>q;
	q.push(root);
	q.push(NULL);
	while(q.size()){
		if(q.size()==1 && q.front()==NULL){
			q.pop();
			continue;
		}
		BinaryTreeNode<int>* front= q.front();
		q.pop();
		if(front==NULL){
			cout<<endl;
			q.push(NULL);
		}
		else{
			cout<<front->data<<" ";
			if(front->left!=NULL)
			q.push(front->left);

			if(front->right!= NULL){
				q.push(front->right);
			}
		}

	}
}