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

pair<int, int> getMinAndMax(BinaryTreeNode<int> *root) {
	// Write your code here
	pair<int,int>p;
	if(root==NULL){
		return {INT_MAX,INT_MIN};
	}
	p={root->data,root->data};
	pair<int,int>a= getMinAndMax(root->left);
	pair<int,int>b= getMinAndMax(root->right);

	p.first= min(a.first,min(p.first,b.first));
	p.second= max(a.second,max(b.second,p.second));
	return p;
}