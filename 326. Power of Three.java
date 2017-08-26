/*
Given an integer, write a function to determine if it is a power of three.

Follow up:
Could you do it without using any loop / recursion?
 */
class Solution {
    public boolean isPowerOfThree(int n) {
        if (n > 0 && 1162261467 % n == 0)
            return true;
        return false;
    }
}