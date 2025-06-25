using namespace std;
#include <iostream>
#include <vector>
class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int m = triangle.size();
        int n = triangle[m-1].size();
        vector<vector<int>> dp(m);
        for (int i = 0; i < m; ++i) {
            dp[i] = vector<int>(i + 1, 0);
        }

        dp[0][0] = triangle[0][0];
        
        for(int i=1;i<m;i++){
            for(int j=0;j<=i;j++){
                if(j==0){
                    dp[i][j] = triangle[i][j]+ dp[i-1][j];
                    continue;
                }
                else if(j==i){
                    dp[i][j] = triangle[i][j]+ dp[i-1][j-1];
                    continue;
                }
                int next = triangle[i][j]+ min(dp[i-1][j], dp[i-1][j-1]);
                dp[i][j] = next;
            }
        }

        int ans = dp[m-1][0];
        for(int i=0;i<dp[m-1].size();i++){
            ans = min(dp[m-1][i], ans);
        }

        return ans;
    }
};
