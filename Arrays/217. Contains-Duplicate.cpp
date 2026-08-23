// Problem: Contains-Duplicate
// Link: leetCode-217
// Pattern: Hashing
// Difficulty: Easy
// Date: 2026-08-23

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        unordered_set<int> numSet;

        for (int num : nums)
        {
            if (numSet.count(num))
            {
                return true;
            }

            numSet.insert(num);
        }

        return false;
    }
};