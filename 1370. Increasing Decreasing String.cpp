1370. Increasing Decreasing String

https://leetcode.com/problems/increasing-decreasing-string/

solution:

class Solution {
public:
    string sortString(string s) {
        unordered_map<char,int> mp;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
        set<char> ss;
        vector<pair<char,int>> v;
        string ans="";
        for(auto x:mp){
            v.push_back(make_pair(x.first,x.second));
        }
        int countfr=0;
        for(int i=0;i<v.size();i++){
            countfr+=v[i].second;
        }
        string news="";
        int count=0;
        int check=0;
        while(true){
            check++;
            for(int i=0;i<v.size();i++){
                if(v[i].second>=1){
                    news+=v[i].first;
                    count++;
                    v[i].second-=1;
                }
                else{
                    continue;
                }
            }
            if(check%2!=0){
                sort(news.begin(),news.end());
                ans+=news;
                news.clear();
            }
            else{
                sort(news.begin(), news.end(), greater<char>());
                ans+=news;
                news.clear();
            }
            if(count==countfr){
                break;
            }
        }
        return ans;
    }
};
