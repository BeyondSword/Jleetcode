/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int SearchLeaves(struct TreeNode* node, int NodeType)
{
	struct TreeNode* right_child = node->right;
	struct TreeNode* left_child = node->left;
	int left_sum = 0, right_sum = 0;
	if(left_child == NULL && right_child == NULL)
	{
		if(NodeType == 0)
		{
			return node->val;
		}
		else
		{
			return 0;
		}
	}
	if(left_child != NULL)
	{
		left_sum = SearchLeaves(left_child,0);
	}
	if(right_child != NULL)
	{
		right_sum = SearchLeaves(right_child,1);
	}

	return left_sum + right_sum;
}
 
int sumOfLeftLeaves(struct TreeNode* root)
{
	if(root == NULL)
	{
		return 0;
	}
	if(root->left == NULL && root->right == NULL)
	{
		return 0;
	}
	return SearchLeaves(root, 0);    
}