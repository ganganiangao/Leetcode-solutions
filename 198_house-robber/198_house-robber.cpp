using namespace std;
# include <iostream>
# include <vector>
class Solution {
public:
    int rob(vector<int>& nums) {
        int len = nums.size();
        vector<int> dp(len+1,0);

        if(len==3) return max(nums[0]+nums[2], nums[1]);
        else if(len==2) return max(nums[0], nums[1]);
        else if(len==1) return nums[0];

        dp[0] = nums[0];
        dp[1] = nums[1];
        dp[2] = nums[2] + nums[0];

        for(int i=3;i<len;i++){
            dp[i] = max(dp[i-2], dp[i-3]) + nums[i];
        }

        return max(dp[len-1], dp[len-2]);  
    }
};
