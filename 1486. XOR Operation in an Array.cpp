1486. XOR Operation in an Array

https://leetcode.com/problems/xor-operation-in-an-array/

solution:

class Solution {
public:
    int xorOperation(int n, int start) {
        int ans=0;
        int i=0;
        while(i<n){
            int x=start+2*i;
            ans^=x;
            i++;
        }
        return ans;
    }
};
