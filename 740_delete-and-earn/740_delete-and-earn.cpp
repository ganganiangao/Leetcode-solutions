using namespace std;
# include <iostream>
# include <vector>
class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        vector<int> sum(10001, 0);
        int len = nums.size();
        for(int i=0;i<len;i++){
            sum[ nums[i] ] += nums[i];
        }
             
        vector<int> dp(10001, 0);
        dp[0] = sum[0];
        dp[1] = sum[1];
        dp[2] = sum[2];

        for(int i=3;i<10001;i++){
            dp[i] = max(dp[i-2], dp[i-3]) + sum[i];
        }

        return max(dp[10000], dp[9999]);
    }
};
