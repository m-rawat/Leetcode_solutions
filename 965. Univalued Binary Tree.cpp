965. Univalued Binary Tree

https://leetcode.com/problems/univalued-binary-tree/

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
    
    int count(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        return 1+count(root->left)+count(root->right);
    }
    
    int sum(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        return root->val+sum(root->left)+sum(root->right);
    }

    
    bool isUnivalTree(TreeNode* root) {
        int root_data=root->val;
        int total=count(root)*root_data;
        int t_sum=sum(root);
        if(total==t_sum){
            return true;
        }
        return false;
    }
};
