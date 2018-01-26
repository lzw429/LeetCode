/*
You are given n pairs of numbers. In every pair, the first number is always smaller than the second number.

Now, we define a pair (c, d) can follow another pair (a, b) if and only if b < c. Chain of pairs can be formed in this fashion.

Given a set of pairs, find the length longest chain which can be formed. You needn't use up all the given pairs. You can select pairs in any order.

Example 1:
Input: [[1,2], [2,3], [3,4]]
Output: 2
Explanation: The longest chain is [1,2] -> [3,4]
 */

class Solution {
public:
    int findLongestChain(vector <vector<int>> &pairs) {
        if (!pairs.size())
            return 0;
        sort(pairs.begin(), pairs.end(), cmp);
        int res = 0;
        for (int i = 0, j = 0; j < pairs.size(); j++) {
            if (!j || pairs[i][1] < pairs[j][0]) {
                res++;
                i = j;
            }
        }
        return res;
    }

private:
    static bool cmp(vector<int> &a, vector<int> &b) {
        return a[1] < b[1];
    }
};