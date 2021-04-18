1832. Check if the Sentence Is Pangram

https://leetcode.com/problems/check-if-the-sentence-is-pangram/

solution :

class Solution {
public:
    bool checkIfPangram(string sentence) {
        set<char>s;
        for(int i=0;i<sentence.length();i++){
            s.insert(sentence[i]);
        }
        if(s.size()==26){
            return true;
        }
        return false;
    }
};