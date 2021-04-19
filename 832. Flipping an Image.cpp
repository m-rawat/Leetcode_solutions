832. Flipping an Image

https://leetcode.com/problems/flipping-an-image/

solution:

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        vector<vector<int>> v;
        vector<int> v1;
        for(int i=0;i<image.size();i++){
            for(int j=image[i].size()-1;j>=0;j--){
                v1.push_back(image[i][j]);
            }
            v.push_back(v1);
            v1.clear();
        }
        vector<vector<int>> v2;
        vector<int> v3;
        int ans=0;
        for(int i=0;i<v.size();i++){
            for(int j=0;j<v[i].size();j++){
                if(v[i][j]==0){
                    ans=1;
                    v3.push_back(ans);
                }
                else{
                    ans=0;
                    v3.push_back(ans);
                }
                
            }
            v2.push_back(v3);
            v3.clear();
        }
        return v2;
    }
};
