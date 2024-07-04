
/*
 *Top-Interview-150-Leetcode
 *  link-https://leetcode.com/problems/merge-sorted-array/?envType=study-plan-v2&envId=top-interview-150
 * 
 * t.c. O(n)
 * 
 */

class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        int f = m-1, s = n-1, i = m+n-1;
        while(s >= 0){
            if(f >= 0 && nums1[f] > nums2[s]){
                nums1[i--] = nums1[f--];
            }
            else {
                nums1[i--] = nums2[s--];
            }
        }
    }
}