/*
 *Invert a binary tree.

	 4
   /   \
  2     7
 / \   / \
1   3 6   9
to
	 4
   /   \
  7     2
 / \   / \
9   6 3   1
 */
 /**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */

class Solution {
public:
	TreeNode* invertTree(TreeNode* root) {
		if (root != nullptr)
		{
			if (root->left != nullptr)//�����ӽ�� 
			{
				TreeNode *right = root->right;
				root->right = root->left;
				root->left = right;
			}
			else if (root->right != nullptr)//û�����ӽ�㣬�����ӽ��
			{
				root->left = root->right;
				root->right = nullptr;
			}
			invertTree(root->left);
			invertTree(root->right);
		}
		return root;
	}
};