1323. Maximum 69 Number

https://leetcode.com/problems/maximum-69-number/

solution:

class Solution {
public:
    int maximum69Number (int num) {
        string s=to_string(num);
        string ans="";
        int count=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='6'){
                if(count==0){
                    ans+='9';   
                }
                if(count>0){
                    ans+=s[i];
                }
                count++;
            }
            else{
                ans+=s[i];
            }
        }
        stringstream geek(ans); 
        int x = 0; 
        geek >> x; 
        return x;
    }
};
