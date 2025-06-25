# 931_minimum-falling-path-sum.

我在寫這一題的時候犯了一個關鍵的錯誤

我沒有先把 dp 陣列全部算完在一次更新

這會導致 dp 陣列並非正確的！

正確的方法應該是先用一個 new_dp 做暫存

等到算完再一次 dp = new_dp 更新

## 原本錯誤的版本
```cpp
using namespace std;
#include <iostream>
#include <vector>
int main(){
    vector<vector<int>> matrix = 
    {{100,-42,-46,-41},
    {31,97,10,-10},
    {-58,-51,82,89},
    {51,81,69,-51}};
    // vector<vector<int>> matrix = {{2,1,3},{6,5,4},{7,8,9}};

    int n = matrix.size();
    vector<int> dp = matrix[0]; // 從第一層開始
    for(int j=0;j<n;j++){
            cout << dp[j] << " ";
    }cout << endl;
    for(int i=1;i<n;i++){
        for(int j=0;j<n;j++){
            
            int min_ = dp[j];

            if(j!=0){
                min_ = min(dp[j-1], min_);
                
            }
            if(j!= n-1){
                min_ = min(min_, dp[j+1]);
            }
            if(min_==dp[j]) cout <<"\\ ";
            if(min_==dp[j-1]) cout <<"/ ";
            
            if(min_==dp[j+1]) cout <<"/ ";
            dp[j] = min_ + matrix[i][j];
            cout << dp[j] << " ";
        }
        cout << endl;
    }



    int ans = dp[0];
    for(int i=0;i<n;i++) {
        ans = min(ans, dp[i]);
        cout << dp[i] << " ";
    }
    cout << endl;
    cout << ans << endl;
}
```

## 正確的版本
```cpp
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
```