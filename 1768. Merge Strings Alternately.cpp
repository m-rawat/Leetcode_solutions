1768. Merge Strings Alternately

https://leetcode.com/problems/merge-strings-alternately/

solution:

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string s="";
        int len1=word1.length();
        int len2=word2.length();
        int a=0,b=0,c=0,d=0;
        if(len1<len2){
            for(int i=0;i<2*len1;i++){
                if(i%2==0){
                    s+=word1[a];
                    a++;
                }
                else{
                    s+=word2[b];
                    b++;
                }
            }
            for(int i=len1;i<len2;i++){
                s+=word2[i];
            }
        }
        else if(len1==len2){
            for(int i=0;i<2*len2;i++){
                if(i%2==0){
                    s+=word1[c];
                    c++;
                }
                else{
                    s+=word2[d];
                    d++;
                }
            }
        }
        else{
            for(int i=0;i<2*len2;i++){
                if(i%2==0){
                    s+=word1[c];
                    c++;
                }
                else{
                    s+=word2[d];
                    d++;
                }
            }
            for(int i=len2;i<len1;i++){
                s+=word1[i];
            }
        }
        return s;
    }
};
