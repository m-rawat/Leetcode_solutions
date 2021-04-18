1662. Check If Two String Arrays are Equivalent

https://leetcode.com/problems/check-if-two-string-arrays-are-equivalent/

solution:

class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s1="";
        string s2="";
        for(int i=0;i<word1.size();i++){
            s1+=word1[i];
        }
        for(int i=0;i<word2.size();i++){
            s2+=word2[i];
        }
        int len1=s1.length();
        int len2=s2.length();
        if(len1!=len2){
            return false;
        }
        else{
            for(int i=0;i<len1;i++){
                if(s1[i]!=s2[i]){
                    return false;
                }
            }
            return true;
        }
    }
};
