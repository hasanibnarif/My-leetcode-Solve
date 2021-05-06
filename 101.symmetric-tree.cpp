/*
 * @lc app=leetcode id=101 lang=cpp
 *
 * [101] Symmetric Tree
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

    bool isSimilar(TreeNode* l,TreeNode* r) {

        if(l==NULL && r==NULL) {
            return true;
        }
        else if(l==NULL) return false;
        else if(r==NULL) return false;

        else if(l->val==r->val) {
            return isSimilar(l->right,r->left) && isSimilar(l->left,r->right);
        }
        else return false;

    }

    bool isSymmetric(TreeNode* root) {
        
        return isSimilar(root->left,root->right);

    }
};
// @lc code=end

