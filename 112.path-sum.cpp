/*
 * @lc app=leetcode id=112 lang=cpp
 *
 * [112] Path Sum
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
    bool hasPathSum(TreeNode* root, int targetSum) {
        
        if (root == nullptr) return false;
        // if leaf node
        if (root->left == nullptr && root->right == nullptr) return root->val == targetSum;
        

        int ts = targetSum - root->val;
        return hasPathSum(root->left, ts) || hasPathSum(root->right, ts);
    }
};
// @lc code=end

