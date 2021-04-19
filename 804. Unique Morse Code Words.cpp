804. Unique Morse Code Words

https://leetcode.com/problems/unique-morse-code-words/

solution:

class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        int count=0;
        string arr[26]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        vector<string>v;
        string ans="";
        for(int i=0;i<words.size();i++){
            ans="";
            for(int j=0;j<words[i].size();j++){
                int x=words[i][j]-'a';
                ans+=arr[x];
            }
            v.push_back(ans);
        }
        set<string> s;
        for(int i=0;i<v.size();i++){
            s.insert(v[i]);
        }
        return s.size();
    }
};
