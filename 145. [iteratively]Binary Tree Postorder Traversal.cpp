/*
 * Given a binary tree, return the postorder traversal of its nodes' values.

For example:
Given binary tree {1,#,2,3},
   1
	\
	 2
	/
   3
return [3,2,1].
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

 // ǰ���Ǹ����ң��޸�ǰ���㷨��ʹ������������ٽ��˽�����򣬵õ����Ҹ���������.
class Solution {
public:
	vector<int> postorderTraversal(TreeNode* root) {
		vector<int> res;
		stack<TreeNode *>stack;

		while (root != nullptr || !stack.empty())
		{
			if (root != nullptr)
			{
				stack.push(root);
				res.push_back(root->val);
				root = root->right;
			}
			else
			{
				TreeNode *top = stack.top();
				stack.pop();
				root = top->left;
			}
		}
		reverse(res.begin(), res.end());
		return res;
	}
};