/*
Write a function to find the longest common prefix string amongst an array of strings.
 */

class Solution {
public:
	string longestCommonPrefix(vector<string>& strs) {
		string prefix;
		if (!strs.size())
			return prefix;
		for (int pos = 0; pos != strs[0].size(); pos++)//����ÿһλ;�ǰ׺�ĳ��Ȳ�����strs[0]�ĳ���
		{
			for (int i = 1; i < strs.size(); i++)//��������strs��ÿ��str
			{
				if (strs[i].size() == pos || strs[i][pos] != strs[0][pos])
					return prefix;
			}
			prefix.push_back(strs[0][pos]);
		}
		return prefix;
	}
};