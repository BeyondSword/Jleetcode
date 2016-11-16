/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool AddValue(struct TreeNode* node, int pre_sum, int sum)
{
	int result_1 = 0,result_2 = 0;
	pre_sum += node->val;
	if(node->left == NULL && node->right == NULL)
	{
		return pre_sum == sum;
	}
	if(node->left != NULL)
	{
		result_1 = AddValue(node->left, pre_sum, sum);
	}
	if(node->right != NULL)
	{
		result_2 = AddValue(node->right, pre_sum, sum);
	}
	return result_1 | result_2;
}


bool hasPathSum(struct TreeNode* root, int sum) 
{
	int pre_sum = 0;
	if(root == NULL)
	{
		return false;
	}
	return AddValue(root, pre_sum, sum);    
}