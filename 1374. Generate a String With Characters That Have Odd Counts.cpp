1374. Generate a String With Characters That Have Odd Counts

https://leetcode.com/problems/generate-a-string-with-characters-that-have-odd-counts/

solution:

class Solution {
public:
    string generateTheString(int n) {
        string ans="";
        if(n%2==0){
            int x=n-1;
            while(x--){
                ans+='a';
            }
            ans+='b';
        }
        else{
            while(n--){
                ans+='a';
            }
        }
        return ans;
    }
};
