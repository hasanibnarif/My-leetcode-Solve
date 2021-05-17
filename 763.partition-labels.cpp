/*
 * @lc app=leetcode id=763 lang=cpp
 *
 * [763] Partition Labels
 */

// @lc code=start
class Solution {
public:
    vector<int> partitionLabels(string s) {
        map<char,int> lastIndex;
        vector<int> ret;

        int i = 0;
        for(char c : s) {
            lastIndex[c] = i++;
        }
        
        int startIndex = 0;

        while(startIndex < s.length()) {

            int solution;
            int end = lastIndex[s[startIndex]]; int i;
            for(i = startIndex+1; i<=end;i++) {
                if(lastIndex[(int)s[i]]>end) {
                    end = lastIndex[s[i]];
                } 
            }
            ret.push_back(end-startIndex+1);
            startIndex = i;
        }

        return ret;
    }
};
// @lc code=end

