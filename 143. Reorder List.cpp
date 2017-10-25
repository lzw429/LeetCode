/*
 * Given a singly linked list L: L0��L1������Ln-1��Ln,
reorder it to: L0��Ln��L1��Ln-1��L2��Ln-2����

You must do this in-place without altering the nodes' values.

For example,
Given {1,2,3,4}, reorder it to {1,4,2,3}.
 */

 /**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

 // ����˳���ǣ�1, ����1, 2, ����2, 3, ����3, ����
class Solution {
public:
	void reorderList(ListNode* head) {
		if (!head || !head->next || !head->next->next)
			return;
		// �ҵ������е�
		ListNode *slow = head, *fast = head;
		while (fast && fast->next)
		{
			slow = slow->next;
			fast = fast->next->next;
		}
		// ���������ż������㣬slowͣ�ڵ�n/2�����
		// �����������������㣬slowͣ�ڵ�n/2 + 1�����

		// �������Ϊ���룬��������ת��slow��ǰ����������һ�����
		ListNode *head2 = slow->next;
		slow->next = nullptr;

		ListNode *p = head2->next;
		head2->next = nullptr;
		while (p)
		{
			ListNode *next = p->next;
			p->next = head2;
			head2 = p;
			p = next;
		}

		// �ϲ���������
		ListNode *p1 = head, *p2 = head2;
		for (; p2;)
		{
			auto next = p1->next;
			p1 = p1->next = p2;
			p2 = next;
		}
	}
};