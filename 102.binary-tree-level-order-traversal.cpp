/*
 * @lc app=leetcode id=102 lang=cpp
 *
 * [102] Binary Tree Level Order Traversal
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

    vector< vector<int> > ret;
    map< TreeNode*, int > level;
    
 
    int max(int a, int b) {
        return (a>b) ? a : b;
    }

    void traverse(TreeNode * node) {

        if(node->left) {
            level[node->left] = level[node] + 1;
            traverse(node->left);
        } 
        
        if(node->right) {
            level[node->right] = level[node] + 1;
            traverse(node->right);
        }
        
    }
    
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        if(root) {
            level[root] = 0;
            traverse(root);
        }
        else return ret;
        int maxi = 0;

        for(auto i : level) {
            maxi = max(maxi, i.second);
           // cout << i.second << endl;
        }


        for(int i = 0; i <= maxi;i++) {
            vector<int> t;
            ret.push_back(t);
        }

        for (auto i : level) {
            
            ret[i.second].push_back(i.first->val);    
        
        }
        return ret;
    }
};
// @lc code=end

