/*
 * Given a binary tree, find its minimum depth.

The minimum depth is the number of nodes along the shortest path from the root node down to the nearest leaf node.
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
	int minDepth(TreeNode* root) {
		if (!root)
			return 0;
		int left = 0, right = 0;
		if (root->left)
			left = minDepth(root->left);
		if (root->right)
			right = minDepth(root->right);
		if (left == 0)
			left = right;
		if (right == 0)
			right = left;
		return min(left, right) + 1;
	}
};