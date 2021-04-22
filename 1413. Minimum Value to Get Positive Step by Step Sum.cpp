1413. Minimum Value to Get Positive Step by Step Sum

https://leetcode.com/problems/minimum-value-to-get-positive-step-by-step-sum/

solution:

class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int a=1,ans=0,n=0;
        bool find = false;
        int x=101;
        while(true){
            n=a;
            find = false;
            for(int i=0;i<nums.size();i++){
                n+=nums[i];
                if(n>0){
                    find =true;
                }
                else if(n==0){
                    find=false;
                    break;
                }
                else{
                    find=false;
                    break;
                }
            }
            if(find){
                ans=a;
                break;
            }
            else{
                a++;
            }
        }
        return ans;
    }
};
