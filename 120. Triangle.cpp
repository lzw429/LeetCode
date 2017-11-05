/*
 * Given a triangle, find the minimum path sum from top to bottom. Each step you may move to adjacent numbers on the row below.

For example, given the following triangle
[
	 [2],
	[3,4],
   [6,5,7],
  [4,1,8,3]
]
The minimum path sum from top to bottom is 11 (i.e., 2 + 3 + 5 + 1 = 11).

Note:
Bonus point if you are able to do this using only O(n) extra space, where n is the total number of rows in the triangle.
 */

class Solution {
public:
	int minimumTotal(vector<vector<int>>& triangle) {
		int size = triangle.size();
		vector<int>sum(triangle.back());//���һ��
		for (int layer = size - 2; layer >= 0; layer--)//�����ڶ���:��һ��
		{
			for (int i = 0; i <= layer; i++)
				sum[i] = min(sum[i], sum[i + 1]) + triangle[layer][i];
		}
		return sum[0];//��һ��ΨһԪ��
	}
};