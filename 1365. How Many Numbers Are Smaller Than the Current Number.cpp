1365. How Many Numbers Are Smaller Than the Current Number

https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/

solution:

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> v;
        int count;
        for(int i=0;i<nums.size();i++){
            count=0;
            for(int j=0;j<nums.size();j++){
                if(nums[i]>nums[j] && i!=j){
                    count++;
                }
            }
            v.push_back(count);
        }
        return v;
    }
};