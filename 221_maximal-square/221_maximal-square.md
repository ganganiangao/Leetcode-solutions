# 221_maximal-square
## beats 38.85%
```cpp
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
```

## beats 85.96%
```cpp
using namespace std;
#include <iostream>
#include <vector>
class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        short ans = 0;
        bool fnd = false;

        vector<short> dp(n);
        for(int j=0;j<n;j++){
            dp[j] = matrix[0][j] - '0';
            if(dp[j]) fnd = true;
        }

        if(m==1 && fnd) return 1;

        for(int i=1;i<m;i++){
            vector<short> new_dp(n, 0);
            if(matrix[i][0] == '1') {
                new_dp[0] = 1;
                fnd = true;
            }
            else new_dp[0] = 0;
            
            for(int j=1;j<n;j++){
                if(matrix[i][j] == '0'){
                    new_dp[j] = 0;
                    continue;
                }
                else{
                    fnd = true;
                    short mindp = min(min(dp[j], dp[j-1]) , new_dp[j-1]);
                    new_dp[j] = mindp +1;
                    ans = max(ans, new_dp[j]);
                }
            }
            dp = new_dp;
        }

        
        int area = ((int)ans)*((int)ans);
        if(fnd) area = max(1, area);
        return area;
    }
};
```