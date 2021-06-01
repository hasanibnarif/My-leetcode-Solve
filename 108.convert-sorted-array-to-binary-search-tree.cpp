/*
 * @lc app=leetcode id=108 lang=cpp
 *
 * [108] Convert Sorted Array to Binary Search Tree
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

    TreeNode* makeBST(int nums[],int left,int right) {


        if(left>right) return NULL;

        if(left==right) return new TreeNode(nums[left]);

        int mid = (left+right)/2;

        TreeNode* root = new TreeNode(nums[mid]);
        root->left = makeBST(nums,left,mid-1);
        root->right = makeBST(nums,mid+1,right);

        return root;


    }

    TreeNode* sortedArrayToBST(vector<int> v) {
        
        int n = v.size();
        int arr[n];
        for(int i=0; i<n; i++) {
            arr[i] = v[i];
        }

        return makeBST(arr,0,n-1);

    }
};
// @lc code=end

