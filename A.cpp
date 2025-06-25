using namespace std;
#include <iostream>
#include <vector>
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
            if(dp[j]) {
                fnd = true;cout << "true";
            }
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
            for(auto i:new_dp) cout << i << " ";
            cout << "\tans="<<ans<< endl;
            dp = new_dp;
        }

        
        int area = ((int)ans)*((int)ans);
        if(fnd) area = max(1, area);
        return area;
    }
};

int main(){
    Solution s;
    // vector<vector<char>> matrix = 
    // {{'1','0','1','0','0'},
    //  {'1','0','1','1','1'},
    //  {'1','1','1','1','1'},
    //  {'1','0','0','1','0'}};
    vector<vector<char>> matrix = 
    {{'1','0'},
     {'0','0'}};
    // vector<vector<char>> matrix = 
    // {{'1'}};
    // vector<vector<int>> matrix = {{2,1,3},{6,5,4},{7,8,9}};

    cout << s.maximalSquare(matrix) << endl;

}
