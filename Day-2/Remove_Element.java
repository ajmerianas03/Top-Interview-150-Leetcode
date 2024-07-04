/*
 *
 * Top-Interview-150-Leetcode
 * 
 *  Remove Element
 * 
 * link - https://leetcode.com/problems/remove-element/description/?envType=study-plan-v2&envId=top-interview-150
 * 
 */




class Solution {
    public int removeElement(int[] nums, int val) {
          int j=0;

        for(int i=0;i<nums.length;i++){
            if(nums[i]!=val){
                nums[j]=nums[i];
                j++;
            }
        }
        return j;
    }
}