#include<stdio.h>
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int maxDepth(struct TreeNode* root) {
	if(root == NULL)
	{
		return 0;
	}
	int Depth = 1;
	Depth = getDepth(root, Depth);
	return Depth;
}

int getDepth(struct TreeNode* node, int length)
{
	struct TreeNode* left_child;
	struct TreeNode* right_child;
	int right_len = length, left_len = length;
	left_child = node->left;
	if(left_child != NULL)
	{
		left_len ++;
		left_len = getDepth(left_child, left_len);
	}
	
	right_child = node->right;
	if(right_child != NULL)
	{
		right_len ++;
		right_len = getDepth(right_child, right_len);
	}
	if(right_len >= left_len)
	{
		return right_len;
	}
	else
	{
		return left_len;
	}
}
