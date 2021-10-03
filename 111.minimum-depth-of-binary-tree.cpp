/*
 * @lc app=leetcode id=111 lang=cpp
 *
 * [111] Minimum Depth of Binary Tree
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


    int minDepth(TreeNode* root) {
        if(root == nullptr) return 0;
        else if (root->left == nullptr) return minDepth(root->right) + 1;
        else if (root->right == nullptr) return minDepth(root->left) + 1;
        else return min(minDepth(root->left),minDepth(root->right)) + 1;

    }
};
// @lc code=end

