/*
 * Given an integer n, generate a square matrix filled with elements from 1 to n2 in spiral order.

For example,
Given n = 3,

You should return the following matrix:
[
 [ 1, 2, 3 ],
 [ 8, 9, 4 ],
 [ 7, 6, 5 ]
]
 */

class Solution {
public:
	vector<vector<int>> generateMatrix(int n) {
		vector<vector<int>>res(n, vector<int>(n));
		int k = 1, i = 0;// k��Ҫ��������֣�i��ѭ������
		while (k <= n*n)
		{
			int j = i;
			while (j < n - i)			//1.������
				res[i][j++] = k++;
			j = i + 1;		//����һ��
			while (j < n - i)			//2.���ϵ���
				res[j++][n - i - 1] = k++;
			j = n - i - 2;	//����һ��
			while (j > i)				//3.���ҵ���
				res[n - i - 1][j--] = k++;
			j = n - i - 1;	//����һ��
			while (j > i)				//4.���µ���
				res[j--][i] = k++;
			i++;
		}
		return res;
	}
};