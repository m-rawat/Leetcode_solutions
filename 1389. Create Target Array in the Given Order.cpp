1389. Create Target Array in the Given Order\

https://leetcode.com/problems/create-target-array-in-the-given-order/

solution:

class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> v;
        int n=nums.size();
        int i=0;
        while(n>0){
            v.insert(v.begin()+index[i],nums[i]);
            n--;
            i++;
        }
        return v;
    }
};
