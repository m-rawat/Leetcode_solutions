1313. Decompress Run-Length Encoded List

https://leetcode.com/problems/decompress-run-length-encoded-list/

solution:

class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<pair<int,int>>v;
        for(int i=0;i<nums.size()-1;i++){
            v.push_back(make_pair(nums[i],nums[i+1]));
            i++;
        }
        vector<int> ans;
        for(int i=0;i<v.size();i++){
            int x=v[i].first;
            while(x--){
                ans.push_back(v[i].second);
            }
        }
        return ans;
    }
};
