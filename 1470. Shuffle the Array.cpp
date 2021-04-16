1470. Shuffle the Array

https://leetcode.com/problems/shuffle-the-array/

solution:

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> v1,v2;
        for(int i=0;i<n;i++){
            v1.push_back(nums[i]);
        }
        for(int i=n;i<2*n;i++){
            v2.push_back(nums[i]);
        }
        vector<int> ans;
        int a=0,b=0;
        for(int i=0;i<2*n;i++){
            if(i%2==0){
                ans.push_back(v1[a]);
                a++;
            }
            else{
                ans.push_back(v2[b]);
                b++;
            }
        }
        return ans;
    }
};