/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

bool CompareTwoNode(struct TreeNode* p, struct TreeNode* q)
{
	if(p == NULL && q == NULL)
	{
		return true;
	}
	else if(p == NULL || q == NULL)
	{
		return false;
	}
	if(p->val == q->val)
	{
		return CompareTwoNode(p->left,q->left) && CompareTwoNode(p->right,q->right);
	}
	return false;
}



bool isSameTree(struct TreeNode* p, struct TreeNode* q) 
{
    return CompareTwoNode(p,q);
}