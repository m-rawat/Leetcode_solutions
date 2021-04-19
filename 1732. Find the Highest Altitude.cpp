1732. Find the Highest Altitude

https://leetcode.com/problems/find-the-highest-altitude/

solution:

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int x=0;
        vector<int> v;
        v.push_back(x);
        for(int i=0;i<gain.size();i++){
            int num=x+gain[i];
            v.push_back(num);
            x=num;
        }
        
        int ans=*max_element(v.begin(),v.end());
        return ans;
    }
};
