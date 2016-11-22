/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* swapPairs(struct ListNode* head) {
	struct ListNode* NewHead;
	if(head == NULL)
	{
		return head;
	}
	if(head->next == NULL)
	{
		return head;
	}
	NewHead = head->next;
	SwapTwoNodes(head);
	return NewHead;	
}

void SwapTwoNodes(struct ListNode* node)
{
	struct ListNode* TmpOper;

	if(node->next == NULL)
	{
		return;
	}
	TmpOper = node->next->next;
	node->next->next = node;
	if(TmpOper == NULL)
	{
		node->next = NULL;
		return;
	}
	else
	{
		if(TmpOper->next == NULL)
		{
			node->next = TmpOper;
			return;
		}
		else
		{
			node->next = TmpOper->next;
			SwapTwoNodes(TmpOper);
			return;
		}
	}
}