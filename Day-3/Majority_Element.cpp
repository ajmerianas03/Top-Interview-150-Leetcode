/*
 * Top-Interview-150-Leetcode
 * 
 * Majority Element
 * 
 * link - https://leetcode.com/problems/majority-element/description/?envType=study-plan-v2&envId=top-interview-150
 * 
 * 
 */


 class Solution {
    public:
        int majorityElement(vector<int>& nums) {
             int count = 0;
            int candidate = 0;
            
            for (int num : nums) {
                if (count == 0) {
                    candidate = num;
                }
                
                if (num == candidate) {
                    count++;
                } else {
                    count--;
                }
            }
            
            return candidate;
        }
    };