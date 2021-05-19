class Solution {
public:
    bool isMatch(string s, string p) {
        vector<vector<bool>> dp(s.size() + 1, vector<bool>(p.size() + 1, false));
        // jodi shurute a* thake, tahole jeno empty string er sathe match hoy

        // or a*a*a* jeno empty er sathe match hoy
		dp[0][0] = true;
        for (int j = 2; j <= p.size(); ++j) {
            if (p[j - 1] == '*') {
                dp[0][j] = dp[0][j - 2];
            }
        }
        
        for (int i = 1; i <= s.size(); ++i) {
            for (int j = 1; j <= p.size(); ++j) {
                 // a* vs c
                    // a* --> as empty string
                if (p[j - 1] != '*') {
                    dp[i][j] = (p[j - 1] == '.' || p[j - 1] == s[i - 1]) && dp[i - 1][j - 1];   
                }
                // else empty || single || multiple

                else {
                    dp[i][j] = dp[i][j - 2] || (((p[j - 2] == '.') || (p[j - 2] == s[i - 1])) && dp[i - 1][j]);
                }
            }
        }
        
        return dp[s.size()][p.size()];
    }
};