1816. Truncate Sentence

https://leetcode.com/problems/truncate-sentence/

solution:

class Solution {
public:
    string truncateSentence(string s, int k) {
        string ans="";
        int count=1;
        for(int i=0;i<s.length();i++){
            if(count>k){
                break;
            }
            if(!isalpha(s[i])){
                count++;
                ans+="";
            }
            if(count<=k){
                ans+=s[i];
            }
        }
        return ans;
    }
};
