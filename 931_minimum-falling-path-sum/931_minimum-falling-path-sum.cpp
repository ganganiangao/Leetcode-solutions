using namespace std;
#include <iostream>
#include <vector>
class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<int> dp = matrix[0]; // 從第一層開始

        for(int i=1;i<n;i++){
            vector<int> new_dp(n); // 暫存這層結果
            for(int j=0;j<n;j++){
                int min_ = dp[j];

                if(j!=0){
                    min_ = min(dp[j-1], min_);
                }
                if(j!= n-1){
                    min_ = min(min_, dp[j+1]);
                }

                new_dp[j] = min_ + matrix[i][j];
            }
            dp = new_dp;
        }

        int ans = dp[0];
        for(int i=0;i<n;i++) ans = min(ans, dp[i]);

        return ans;
    }
};
