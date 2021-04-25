1837. Sum of Digits in Base K

https://leetcode.com/contest/weekly-contest-238/problems/sum-of-digits-in-base-k/

solution:

class Solution {
    public:
    int sumBase(int n, int k) {
        int ans=0;
        while(n>0){
            ans+=(n%k);
            n/=k;
        }
        return ans;
    }
};
