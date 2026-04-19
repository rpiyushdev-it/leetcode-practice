/*
Question: Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same. Consider the number of unique elements in nums to be k​​​​​​​​​​​​​​. After removing duplicates, return the number of unique elements k. The first k elements of nums should contain the unique numbers in sorted order. The remaining elements beyond index k - 1 can be ignored.
Link: https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/?envType=problem-list-v2&envId=array
*/

// Approach 1
int removeDuplicates(vector<int>& nums){
    if (nums.empty()) return 0;
    int j = 0;
    for (int i = 1; i < nums.size(); i++) {
        if (nums[j] != nums[i]) {
            nums[++j] = nums[i]
        }
    }
    return j+1;
}

// Date  : 19/04/2026