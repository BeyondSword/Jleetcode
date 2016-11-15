/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* invertTree(struct TreeNode* root) {
		if(root == NULL)
		{
			return root;
		}
		SwapRightLeftNode(root);
		return root;
}

void SwapRightLeftNode(struct TreeNode* father)
{
		struct TreeNode* left_child = father->left;
		struct TreeNode* right_child = father->right;
		father->right = left_child;
		father->left = right_child;
		if(father->right != NULL)
		{
			SwapRightLeftNode(father->right);
		}
		if(father->left != NULL)
		{
			SwapRightLeftNode(father->left);
		}
		return;
}