// Problem:  single num
// Link: leetCode-136
// Pattern: Hashing
// Difficulty: Easy
// Date: 2026-08-23

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;

        for (int val : nums) {
            ans = ans ^ val;  
        }                      
        return ans;
    }
};



// Suppose vector {4,1,1}
// 4 binary = 100
// 1 binary = 001
//------------------
//Xor      =  101
//1 binaray = 001
//------------------
//singleNum = 100 -> which is 4 
