867. Transpose Matrix

https://leetcode.com/problems/transpose-matrix/

solution:

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        vector<vector<int>> v;
        vector<int> v1;
        for(int j=0;j<matrix[0].size();j++){
            for(int i=0;i<matrix.size();i++){
                v1.push_back(matrix[i][j]);
            }
            v.push_back(v1);
            v1.clear();
        }
        return v;
    }
};
