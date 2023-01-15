#include <bits/stdc++.h>
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

using namespace std;

void zigZagOrder(BinaryTreeNode<int> *root) {
    // Write your code here
	if(root==NULL)
	return;

	stack<BinaryTreeNode<int>*>s1;
	stack<BinaryTreeNode<int>*>s2;
	s1.push(root);
	while(s1.size() or s2.size()){
		while(s1.size()){
			BinaryTreeNode<int>* temp= s1.top();
			s1.pop();
			cout<<temp->data<<" ";
			if(temp->left)
			s2.push(temp->left);
			if(temp->right)
			s2.push(temp->right);

			if(s1.size()==0)
			cout<<endl;
		}
		while(s2.size()){
			BinaryTreeNode<int>* temp= s2.top();
			s2.pop();
			cout<<temp->data<<" ";
			if(temp->right)
			s1.push(temp->right);
			if(temp->left)
			s1.push(temp->left);
			if(s2.size()==0)
			cout<<endl;
		}
	}


}