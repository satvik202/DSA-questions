/************************************************************

    Following is the Binary Tree node structure

    template <typename T>
    class BinaryTreeNode
    {
        public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data)
        {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
bool val=false;
bool isNodePresent(BinaryTreeNode<int> *root, int x) {
    // Write your code here
    if(root->data==x){
        return true;
    }
    else{
      if (root->left) {
        val = isNodePresent(root->left, x);
      }
      if (root->right) {
        val = isNodePresent(root->right, x);
      }
    }
    return val;
}