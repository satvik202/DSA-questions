
#include <iostream>
#include <queue>
template <typename T>
class BinaryTreeNode {
public : 
T data;
BinaryTreeNode<T> *left;
BinaryTreeNode<T> *right;
BinaryTreeNode(T data) {
	this -> data = data;
	left = NULL;
	right = NULL;
	}
};

BinaryTreeNode<int>* buildTree(int *preorder, int preLength, int *inorder, int inLength) {
    // Write your code here
	if(preLength==0)
	return NULL;

	BinaryTreeNode<int>* root= new BinaryTreeNode<int>(preorder[0]);
	int a= preorder[0];
	int i=0;
	for(i=0;i<inLength;i++){
		if(inorder[i]==a)
		break;
	}

	root->left= buildTree(preorder+1,i,inorder,i);
	root->right= buildTree(preorder+i+1,preLength-i-1,inorder+i+1,inLength-i-1);

	return root;
}