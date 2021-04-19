1704. Determine if String Halves Are Alike

https://leetcode.com/problems/determine-if-string-halves-are-alike/

solution:

class Solution {
public:
    bool halvesAreAlike(string s) {
        string s1="";
        string s2="";
        for(int i=0;i<s.length()/2;i++){
            s1+=s[i];
        }
        transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
        for(int i=s.length()/2;i<s.length();i++){
            s2+=s[i];
        }
        transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
        int count1=0,count2=0;
        if(s1.length()!=s2.length()){
            return false;
        }
        for(int i=0;i<s1.length();i++){
            if(s1[i]=='a' ||s1[i]=='e'|| s1[i]=='i'|| s1[i]=='o'||s1[i]=='u'){
                count1++;
            }
        }
        for(int i=0;i<s2.length();i++){
            if(s2[i]=='a' ||s2[i]=='e'|| s2[i]=='i'|| s2[i]=='o'||s2[i]=='u'){
                count2++;
            }
        }
        if(count1==count2){
            return true;
        }
        return false;
    }
};
