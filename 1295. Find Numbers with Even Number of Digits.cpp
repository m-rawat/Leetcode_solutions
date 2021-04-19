1295. Find Numbers with Even Number of Digits

https://leetcode.com/problems/find-numbers-with-even-number-of-digits/

solution:

class Solution {
public:
    int check(int n){
        int count=0;
        while(n!=0){
            count++;
            n/=10;
        }
        return count;
    }
    int findNumbers(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<=9){
                count+=0;
            }
            else if((check(nums[i]))%2==0){
                count++;
            }
        }
        return count;
    }
};
