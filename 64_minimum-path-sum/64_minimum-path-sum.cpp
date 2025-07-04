using namespace std;
#include <iostream>
#include <vector>
class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        
        int dp[m][n];
        dp[0][0] = grid[0][0];

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0 && j==0) continue;
                if(i==0){
                    dp[i][j] = dp[i][j-1] + grid[i][j];
                    continue;
                }
                if(j==0){
                    dp[i][j] = dp[i-1][j] + grid[i][j];
                    continue;
                } 

                dp[i][j] = min(dp[i][j-1], dp[i-1][j]) + grid[i][j];               

            }
        }


        return dp[m-1][n-1];
    }
};