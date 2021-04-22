1752. Check if Array Is Sorted and Rotated

https://leetcode.com/problems/element-appearing-more-than-25-in-sorted-array/

solution:

class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        unordered_map<int,int> mp;
        int max=INT_MIN;
        int ans=0;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        for(auto x:mp){
            if(x.second>max){
                max=x.second;
                ans=x.first;
            }
        }
        if(max>=arr.size()/4){
            return ans; 
        }
        return 0;
    }
};
