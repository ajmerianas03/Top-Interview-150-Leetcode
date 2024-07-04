/*
 * Top-Interview-150-Leetcode
 * 
 * Rotate Array
 * 
 * link - https://leetcode.com/problems/rotate-array/description/?envType=study-plan-v2&envId=top-interview-150
 * 
 * 
 */

#include <vector>
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int size = nums.size();
        k = k % size;
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
    }
};