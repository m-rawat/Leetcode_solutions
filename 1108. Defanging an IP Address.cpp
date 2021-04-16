1108. Defanging an IP Address

https://leetcode.com/problems/defanging-an-ip-address/

solution:

class Solution {
public:
    string defangIPaddr(string address) {
        string ans="";
        for(int i=0;i<address.length();i++){
            if(address[i]=='.'){
                ans+='[';
                ans+='.';
                ans+=']';
            }
            else{
                ans+=address[i];
            }
        }
        return ans;
    }
};