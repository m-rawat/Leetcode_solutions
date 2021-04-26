821. Shortest Distance to a Character

https://leetcode.com/problems/shortest-distance-to-a-character/

solution:

class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> v;
        int min=INT_MAX;
        int dis=0;
        for(int i=0;i<s.length();i++){
            min=INT_MAX;
            dis=0;
            for(int j=0;j<s.length();j++){
                if(s[j]==c){
                    dis=abs(i-j);
                    if(min>dis){
                        min=dis;
                    }
                }
            }
            v.push_back(min);
        }
        return v;
    }
};
