/*
 * @lc app=leetcode id=4 lang=cpp
 *
 * [4] Median of Two Sorted Arrays
 */

// @lc code=start
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        int l = (n+m)/2; int r = (n+m-1)/2;

        int arr[n+m];


        int i=0,j=0,k=0;
        while (true)
        {
            if(i<n && j<m) {
                if(nums1[i]<nums2[j]) {
                    arr[k] = nums1[i];
                    i++;
                } 
                else {
                    arr[k] = nums2[j];
                    j++;
                }
                k++;
            }
            else if(i<n) {
                arr[k] = nums1[i];
                i++; k++;
            }
            else if(j<m) {
                arr[k] = nums2[j];
                j++; k++;
            }
            else
                break;
        }

        for(int i=0;i<n+m;i++) {
            cout << arr[i] << " ";
        }
        return (arr[l]+arr[r])/2.0;
        
    }
};
// @lc code=end

