111. Minimum Depth of Binary Tree

https://leetcode.com/problems/minimum-depth-of-binary-tree/

solution:

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    int minDepth(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        int ls=minDepth(root->left);
        int rs=minDepth(root->right);
        if(ls==0 || rs==0){
            return max(ls,rs)+1;
        }
        return min(ls,rs)+1;
    }
};
