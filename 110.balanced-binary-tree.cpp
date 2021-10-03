/*
 * @lc app=leetcode id=110 lang=cpp
 *
 * [110] Balanced Binary Tree
 */

// @lc code=start
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

    int getDepth(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }
        return 1 + max(getDepth(root->left), getDepth(root->right));
    }
    
    bool isBalanced(TreeNode* root) {
        if(root == nullptr) return true;
        int left = getDepth(root->left);
        int right = getDepth(root->right);
        if(abs(left - right) > 1) return false;
        return isBalanced(root->left) && isBalanced(root->right);
    }

};
// @lc code=end

