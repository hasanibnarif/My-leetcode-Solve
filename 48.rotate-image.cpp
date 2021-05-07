/*
 * @lc app=leetcode id=48 lang=cpp
 *
 * [48] Rotate Image
 */

// @lc code=start
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        // mirror accross main diagonal
        int n =  matrix.size();
        int temp;
        for(int i=0;i<n;i++) {
            for(int j=0;j<i;j++) {
                // swap
                temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }

        // mirror accross vertical middle axis
    
        for(int i=0;i<n;i++) {
            for(int j=0;j<(n/2);j++) {
                //swap
                temp = matrix[i][j];
                matrix[i][j] = matrix[i][n-1-j];
                matrix[i][n-1-j] = temp;
            }
        }
        
        
    }
};
// @lc code=end

