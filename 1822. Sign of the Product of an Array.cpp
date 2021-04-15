1822. Sign of the Product of an Array

https://leetcode.com/problems/sign-of-the-product-of-an-array/

Solution:

class Solution {
public:
    int arraySign(vector<int>& nums) {
        int count=0,z=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                count++;
            }
            if(nums[i]==0){
                z=1;
            }
        }
        if(z==1){
            return 0;
        }
        else if(count%2==0){
            return 1;
        }
        return -1;
    }
};