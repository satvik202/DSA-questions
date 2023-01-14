#include <iostream>
#include <queue>

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

BinaryTreeNode<int>* removeLeafNodes(BinaryTreeNode<int> *root) {
    // Write your code here
	if(root==NULL){
		return root;
	}
	if(root->left==NULL && root->right==NULL){
		return NULL;
	}
	BinaryTreeNode<int>* a= removeLeafNodes(root->left);
    BinaryTreeNode<int>* b = removeLeafNodes(root->right);

	root->left=a;
	root->right=b;
	return root;
}
