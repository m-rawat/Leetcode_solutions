1773. Count Items Matching a Rule

https://leetcode.com/problems/count-items-matching-a-rule/

solution:

class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        vector<string> temp;
        temp.push_back("type");
        temp.push_back("color");
        temp.push_back("name");
        int count=0;
        for(int i=0;i<temp.size();i++){
            count++;
            if(temp[i]==ruleKey){
                break;
            }
        }
        int res=0;
        for(int i=0;i<items.size();i++){
            for(int j=0;j<items[i].size();j++){
                if(ruleValue==items[i][j] && count==j+1){
                    res++;
                }
            }
        }
        return res;
    }
};
