/*
 * @lc app=leetcode id=516 lang=cpp
 *
 * [516] Longest Palindromic Subsequence
 */

// @lc code=start
using namespace std;
#include <iostream>
#include <string>
#include <vector>
class Solution {
private:
    int solve(vector<vector<int>> &dp, string &s, int i, int j){
        if(i==j) return dp[i][j] = 1;

        if(j-1==i) {
            if(s[i]==s[j]) return dp[i][j] = 2;
            else return dp[i][j] = 1;
        }

        if(s[i]==s[j]) {
            return dp[i][j] = dp[i+1][j-1]+2;
        }
        else {
            return dp[i][j] = max(dp[i+1][j], dp[i][j-1]);
        }
    }
public:
    int longestPalindromeSubseq(string s) {
        int n = s.size();
        vector<vector<int>> dp(n, vector<int>(n,0));
        for(int g=0;g<n;g++){
            for(int i=0,j=g; j<n; i++,j++){
                solve(dp, s, i, j);
            }
        }
        return dp[0][n-1];
    }

    
};
// @lc code=end
