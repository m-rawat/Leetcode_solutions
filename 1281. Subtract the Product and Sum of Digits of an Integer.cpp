1281. Subtract the Product and Sum of Digits of an Integer

https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/

solution:

class Solution {
public:
    int subtractProductAndSum(int n) {
        int prod=1;
        int sum=0;
        while(n!=0){
            int x=n%10;
            sum+=x;
            prod*=x;
            n/=10;
        }
        int ans=prod-sum;
        return ans;
    }
};