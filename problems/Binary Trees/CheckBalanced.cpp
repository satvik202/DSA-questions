/**********************************************************/
	//Following is the Binary Tree Node class structure

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

int height(BinaryTreeNode<int>* root) {
    // Write our code here
	if(root==NULL)
	return 0;

	return 1+ max(height(root->left), height(root->right));
}

bool isBalanced(BinaryTreeNode<int> *root) {
	// Write your code here
	if(root==NULL){
		return true;
	}
	int x=height(root->left);
	int y=height(root->right);
	int z= abs(x-y);
	if(z>1)
	return false;
	
	bool a= isBalanced(root->left);
	bool b= isBalanced(root->right);


	return a && b;

}