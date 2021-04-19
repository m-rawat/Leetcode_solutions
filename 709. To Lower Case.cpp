709. To Lower Case

https://leetcode.com/problems/to-lower-case/

solution:

class Solution {
public:
    string toLowerCase(string str) {
        string ans="";
        transform(str.begin(), str.end(), str.begin(), ::tolower);
        for(int i=0;i<str.length();i++){
            ans+=str[i];
        }
        return ans;
    }
};
