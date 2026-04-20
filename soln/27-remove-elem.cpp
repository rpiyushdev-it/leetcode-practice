/*
Question: Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. The order of the elements may be changed. Then return the number of elements in nums which are not equal to val.
Link: https://leetcode.com/problems/remove-element/description/?envType=problem-list-v2&envId=array
*/

// Approach 1
int removeElement(vector<int>& nums, int val) {
    int index = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != val) {
            nums[index] = val;
            index++;
        }
    }
    return index;
}

// Date: 20/04/2026