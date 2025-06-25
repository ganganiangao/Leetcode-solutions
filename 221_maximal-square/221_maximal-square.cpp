using namespace std;
#include <iostream>
#include <vector>
class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<vector<int>> dp(m, vector<int>(n,0));
        int ans = 0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0||j==0){
                    if(matrix[i][j] == '1') dp[i][j] = 1;
                    if(ans == 0) ans = max(ans, dp[i][j]);
                    continue;
                }

                if(matrix[i][j] == '1'){
                    if(    matrix[i-1][j-1]  == '1'
                        && matrix[i-1][j] == '1' 
                        && matrix[i][j-1] == '1')
                    {
                        int min_ = min(dp[i-1][j-1] ,dp[i-1][j]);
                        min_ = min(min_, dp[i][j-1]);
                        dp[i][j] = min_+1;
                        ans = max(ans, dp[i][j]);
                    }
                    else{
                        dp[i][j] = 1;
                        ans = max(ans, dp[i][j]);
                    }
                }
            }
        }

        return ans*ans;
    }
};