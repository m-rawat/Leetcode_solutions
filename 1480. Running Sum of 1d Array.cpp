1480. Running Sum of 1d Array

https://leetcode.com/problems/running-sum-of-1d-array/

solution:

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum=0;
        vector<int> v;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            v.push_back(sum);
        }
        return v;
    }
};
