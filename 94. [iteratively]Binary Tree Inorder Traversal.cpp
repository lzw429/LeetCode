/*
 Given a binary tree, return the inorder traversal of its nodes' values.

For example:
Given binary tree [1,null,2,3],
   1
	\
	 2
	/
   3
return [1,3,2].
 */

 /**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 /**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
	vector<int> inorderTraversal(TreeNode* root) {//�������
		vector<int> res;
		stack<TreeNode * >stack;
		TreeNode *cur = root;

		while (!stack.empty() || cur)//ջ�ǿջ���cur�ǿ�
		{
			if (cur)//cur�ǿգ�ѹջ���������ȡ���ӽ��
			{
				stack.push(cur);
				cur = cur->left;
			}
			else//curΪ�գ�ջ�ǿգ���ջ
			{
				TreeNode *top = stack.top();
				res.push_back(top->val);
				stack.pop();
				cur = top->right;
			}
		}
		return res;
	}
};