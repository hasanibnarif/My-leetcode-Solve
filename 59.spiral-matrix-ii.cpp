/*
 * @lc app=leetcode id=59 lang=cpp
 *
 * [59] Spiral Matrix II
 */

// @lc code=start
class Solution {
  
    bool check(int i,int j,int n) {
        if(i < n && j < n && i >= 0 && j >= 0) 
            return true;
        else return false;
    }

public:
    vector<vector<int>> generateMatrix(int n) {

       vector<vector<int>> arr;

        int ix[] = { 0, 1, 0, -1 };
        int jx[] = { 1, 0, -1, 0 };
        bool seen[n][n];
    

        for (int i = 0; i < n; i++) {
            vector<int> t;
            for (int j = 0; j < n; j++) {
                t.push_back(-1);
                seen[i][j] = false;
            }

            arr.push_back(t);
        }

        int ii = 0, jj = 0, turn = 0;

        for(int Q=1;Q<=n*n;Q++) {

            arr[ii][jj] = Q;
            seen[ii][jj] = true;


            if(check(ii+ix[turn],jj+jx[turn],n) && seen[ii+ix[turn]][jj+jx[turn]]==false) {
                ii = ii+ix[turn];
                jj = jj+jx[turn];
            }

            else {
                turn = (turn+1) % 4;
                ii = ii + ix[turn];
                jj = jj + jx[turn];
            }

        }
 

        return arr;
        
    }
};
// @lc code=end

