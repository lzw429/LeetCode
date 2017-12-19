/*
Given a sorted linked list, delete all duplicates such that each element appear only once.

For example,
Given 1->1->2, return 1->2.
Given 1->1->2->3->3, return 1->2->3.
*/

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
	ListNode *deleteDuplicates(ListNode *head) {
		if (!head || !head->next)return head;// ����head�ĳ���Ϊ0��1
		ListNode *node = head;
		while (node != nullptr && node->next != nullptr) // �ж�node->next�Ƿ�Ϊ��ǰ�����ж�node�Ƿ�Ϊ��
		{
			if (node->val == node->next->val) // ���node��node->next��ȣ�nodeλ�ò��ı䣬���޸�node->next
				node->next = node->next->next;
			else node = node->next;
		}
		return head;
	}
};