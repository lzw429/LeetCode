/*
 *You are playing the following Nim Game with your friend: There is a heap of stones on the table, each time one of you take turns to remove 1 to 3 stones. The one who removes the last stone will be the winner. You will take the first turn to remove the stones.

Both of you are very clever and have optimal strategies for the game. Write a function to determine whether you can win the game given the number of stones in the heap.

For example, if there are 4 stones in the heap, then you will never win the game: no matter 1, 2, or 3 stones you remove, the last stone will always be removed by your friend.
 */

 /*
  *�����������n = 4ʱ������������ʾ�Ľ��飬���۵�һ���������һ�����ڶ�����������ܹ�ѡ��ʣ������֡�

 ����1 * 4 <n <2 * 4����n = 5��6��7������һ����ҿ��Խ���ʼ������Ӧ����Ϊ4���⽫ʹ��������4�����ڶ�����ҡ� ������5,6,7�ǻ�õ�һ������ҵĻ񽱺��롣

 ���ڵ���һ�����ڵĿ�ʼ��n = 8�����۵�һ�����ѡ���ĸ����룬���Ὣ��ʤ���루5,6,7�������ڶ�����ҡ� ��ˣ�8��4 == 0���ٴ�������������

 �ڵڶ�������£����ڵڣ�2 * 4 = 8���ͣ�3 * 4 = 12��֮������֣���9,10,11���ٴ��ǵ�һ����ҵĻ�ʤ���룬��Ϊ��һ��������ǿ��Լ��ٺ��� ������������8�ˡ�
  */

class Solution {
public:
	bool canWinNim(int n) {
		return n % 4 != 0;
	}
};