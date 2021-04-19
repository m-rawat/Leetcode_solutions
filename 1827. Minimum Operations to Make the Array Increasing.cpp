1827. Minimum Operations to Make the Array Increasing

https://leetcode.com/problems/minimum-operations-to-make-the-array-increasing/

solution:

class Solution {
public:
    int minOperations(vector<int>& nums) {
        if(nums.size()==1){
            return 0;
        }
        int ans=0,count=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]<nums[i+1]){
                continue;
            }
            else{
                ans+=(abs(nums[i]-nums[i+1]));
                ans+=1;
                count+=ans;
            }
            nums[i+1]=nums[i+1]+ans;
            ans=0;
        }
        return count;
    }
};
