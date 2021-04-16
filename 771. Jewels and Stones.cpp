771. Jewels and Stones

https://leetcode.com/problems/jewels-and-stones/

solution:

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        vector<char> v;
        for(int i=0;i<jewels.length();i++){
            v.push_back(jewels[i]);
        }
        int count=0;
        for(int i=0;i<v.size();i++){
            for(int j=0;j<stones.length();j++){
                if(v[i]==stones[j]){
                    count++;
                }
            }
        }
        return count;
    }
};