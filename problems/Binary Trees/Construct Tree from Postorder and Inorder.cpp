/***********************************************************/
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

BinaryTreeNode<int>* buildTree(int *postorder, int postLength, int *inorder, int inLength){
    // Write your code here
	if(postLength==0)
	return NULL;

	BinaryTreeNode<int>* root= new BinaryTreeNode<int>(postorder[postLength-1]);

	int rootIndex=0; 
	while(inorder[rootIndex]!=postorder[postLength-1]){
		rootIndex++;
	}
	int leftlength=rootIndex;
	int rightlength=inLength-rootIndex-1;

	root->left= buildTree(postorder,leftlength,inorder,leftlength);
	root->right= buildTree(postorder+leftlength,rightlength,inorder+leftlength+1,rightlength);

	return root;
}