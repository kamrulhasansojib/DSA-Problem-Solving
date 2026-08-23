// Problem: Two Sum
// Link: LeetCode-01
// Pattern: Hashing
// Difficulty: Easy
// Date: 2026-08-22


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i<nums.size(); i++){
            for (int j = i + 1; j<nums.size(); j++){
                if(nums[i] + nums[j] == target){
                    return {i,j};
                }
            }
        }
        return nums;
    }
};