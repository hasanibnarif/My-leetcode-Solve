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
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int n = preorder.size();
        vector<TreeNode*> nodes;
        TreeNode *root, *parent;
        
        // lets create a new node for each value, could do it later though
        
        for(int i=0;i<n;i++) {
            nodes.push_back ( new TreeNode(preorder[i]) );
        }
        
        
        // alryt, let's iterate over each item 
        // nodes[0] is the root, right?
        // so we should start from i = 1
        for(int i=1;i<n;i++) {
            
            // if a new arrival node is smaller, it should be the left one
            // as we know they are coming from pre-order traversal
            // no need to check anything huh
            
            if(preorder[i]<preorder[i-1]) {
                nodes[i-1]->left = nodes[i]; //insert left
            }
            
            // but, if a new arrival node is bigger, we gotta check something
            // lets start from root and search for the node
            // that's basically what we used to do in insert operation in BST
            
            
            else {
                
                root = nodes[0];
                
                while(root) {
                    
                    parent = root;
                    
                    if(preorder[i] > root->val) {
                        root = root->right;
                    }
                    else root = root->left;
                }
                
                // so we found the parent
                
                parent->right = nodes[i]; //insert right
                
                
            }
        }
        
        // there you go!
        
        return nodes[0];
    }
    
    
};