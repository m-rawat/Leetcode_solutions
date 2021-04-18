1614. Maximum Nesting Depth of the Parentheses

https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/

solution:

class Solution {
public:
    int maxDepth(string s) {
        int max=INT_MIN;
        int count=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                count++;
            }
            else if(s[i]==')'){
                count--;
            }
            if(count>max){
                max=count;
            }
        }
        return max;
    }
};
