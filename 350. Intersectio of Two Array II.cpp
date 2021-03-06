/*

Given two arrays, write a function to compute their intersection.

Example:
Given nums1 = [1, 2, 2, 1], nums2 = [2, 2], return [2, 2].

Note:
Each element in the result should appear as many times as it shows in both arrays.
The result can be in any order.
Follow up:
What if the given array is already sorted? How would you optimize your algorithm?
What if nums1's size is small compared to nums2's size? Which algorithm is better?
What if elements of nums2 are stored on disk, and the memory is limited such that you cannot load all elements into the memory at once?

 */

class Solution {
public:
    vector<int> intersect(vector<int> &nums1, vector<int> &nums2) {
        vector<int> res;
        if (nums1.empty() || nums2.empty())
            return res;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        for (auto i = nums1.begin(), j = nums2.begin(); i != nums1.end() && j != nums2.end();) {
            if (*i < *j)
                ++i;
            else if (*i > *j)
                ++j;
            else {
                res.push_back(*i);
                ++i;
                ++j;
            }
        }
        return res;
    }
};