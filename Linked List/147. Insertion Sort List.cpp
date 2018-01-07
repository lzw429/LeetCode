/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     ListNode *next;
*     ListNode(int x) : val(x), next(NULL) {}
* };
*/
class Solution {
public:
	ListNode* insertionSortList(ListNode* head) {
		if (head == NULL || head->next == NULL)
			return head;
		ListNode * new_head = new ListNode(0);
		new_head->next = head;
		ListNode *pre = new_head;
		ListNode *cur = head;
		while (cur)
		{
			if (cur->next && cur->val > cur->next->val)//��� cur->next ��cur С����Ҫ�� cur->next ����λ��
			{
				while (pre->next && pre->next->val < cur->next->val)
					pre = pre->next;//�ҵ� cur->next Ӧ���ڵ�λ��
				// �� cur->next ���뵽 pre ��
				ListNode* temp = pre->next;
				pre->next = cur->next;
				cur->next = cur->next->next;
				pre->next->next = temp;
				// �� pre �������� new_head
				pre = new_head;
			}
			else
				cur = cur->next;
		}
		ListNode * res = new_head->next;
		delete new_head;
		return res;
	}
};