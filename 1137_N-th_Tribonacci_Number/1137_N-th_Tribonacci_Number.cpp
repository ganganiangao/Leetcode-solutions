/*
 * @lc app=leetcode id=746 lang=cpp
 *
 * [746] Min Cost Climbing Stairs
 */
#include <vector>
using namespace std;
// @lc code=start
class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> dp(cost.size()+1);
        dp[0] = cost[0];
        dp[1] = cost[1];

        for(int i=2;i<cost.size();i++){
            dp[i] = min(dp[i-1],dp[i-2]) + cost[i];
        }

        return min(dp[cost.size()-1], dp[cost.size()-2]);
        
    }
};
// @lc code=end
