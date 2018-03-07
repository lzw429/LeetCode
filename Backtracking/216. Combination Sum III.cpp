/*
Find all possible combinations of k numbers that add up to a number n, given that only numbers from 1 to 9 can be used and each combination should be a unique set of numbers.


Example 1:

Input: k = 3, n = 7

Output:

[[1,2,4]]

Example 2:

Input: k = 3, n = 9

Output:

[[1,2,6], [1,3,5], [2,3,4]]
 */

class Solution {
public:
    void combination(vector <vector<int>> &res, vector<int> &sol, int k, int n) {
        if (sol.size() == k && n == 0) { // 符合条件
            res.push_back(sol);
            return;
        }
        if (sol.size() < k) {
            for (int i = sol.empty() ? 1 : sol.back() + 1; i <= 9 && i <= n; i++) {
                // 注意i的两个限定条件
                sol.push_back(i);
                combination(res, sol, k, n - i);
                sol.pop_back();
            }
        }
    }

    vector <vector<int>> combinationSum3(int k, int n) {
        vector <vector<int>> res;
        vector<int> sol;
        combination(res, sol, k, n);
        return res;
    }
};