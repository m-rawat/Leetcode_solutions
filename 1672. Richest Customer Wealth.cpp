1672. Richest Customer Wealth

https://leetcode.com/problems/richest-customer-wealth/

solution:

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int sum,max=INT_MIN;
        for(int i=0;i<accounts.size();i++){
            sum=0;
            for(int j=0;j<accounts[i].size();j++){
                sum+=accounts[i][j];
            }
            if(max<sum){
                max=sum;
            }
        }
        return max;
    }
};