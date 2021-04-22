1800. Maximum Ascending Subarray Sum

https://leetcode.com/problems/maximum-ascending-subarray-sum/

solution:

class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
        int count=0,sum=0;
        int max=INT_MIN;
        int n;
        vector<int> v;
        for(int i=0;i<nums.size()-1;i++){
            v.clear();
            n=0;
            v.push_back(nums[i]);
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]<nums[j]){
                    nums[i]=nums[j];
                    v.push_back(nums[j]);
                }
                else{
                    break;
                }
            }
            sum=0;
            for(int i=0;i<v.size();i++){
                sum+=v[i];
            }
            if(max<sum){
                max=sum;
            }
        }
        
        return max;
    }
};
