496. Next Greater Element I

https://leetcode.com/problems/next-greater-element-i/

solution:

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int b_num=0,num=0;
        bool big=false;
        vector<int> ans;
        for(int i=0;i<nums1.size();i++){
            num=pow(10,4)+4;
            int idx=0;
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                    num=nums1[i];
                    idx=j;
                }
                if(num<nums2[j] && j>idx){
                    big=true;
                    b_num=nums2[j];
                    break;
                }
                else{
                    big=false;
                }
            }
            if(big){
                ans.push_back(b_num);
            }
            else{
                ans.push_back(-1);
            }
        }
        return ans;
    }
};
