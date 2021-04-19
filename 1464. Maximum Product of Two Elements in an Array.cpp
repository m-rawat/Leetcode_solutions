1464. Maximum Product of Two Elements in an Array

https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/

solution:

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int a=(nums[nums.size()-1])-1;
        int b=(nums[nums.size()-2])-1;
        return a*b;
    }
};
