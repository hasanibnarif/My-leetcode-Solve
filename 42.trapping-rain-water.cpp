/*
 * @lc app=leetcode id=42 lang=cpp
 *
 * [42] Trapping Rain Water
 */

// @lc code=start
class Solution {
public:
    int max(int a, int b) {
        return (a>b) ? a : b;
    }
    int min(int a, int b) {
        return (a<b) ? a : b;
    }

    int trap(vector<int>& height) {

        int n = height.size(); if(n==0) return 0;
        int left_max[n];
        int right_max[n];
        int maxi = -99999;

        for (int i = 0; i <n; i++) {
            maxi = max(maxi,height[i]);
            left_max[i] = maxi;
        }
        maxi = -99999;
        for(int i=n-1; i >= 0; i--) {
            maxi = max(maxi,height[i]);
            right_max[i] = maxi;
        }

        int solution = 0;
        for(int i=1;i<n-1;i++) {
            solution += (min(left_max[i],right_max[i])-height[i]);
        }

        return solution;
        
    }
};
// @lc code=end

