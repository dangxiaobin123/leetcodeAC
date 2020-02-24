#include <vector>
#include <algorithm>
using namespace std;
/*
  *  给定一个整数数组 nums ，找到一个具有最大和的连续子数组（子数组最少包含一个元素），返回其最大和。
*/
class Solution
{
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.empty()) return 0;
        int n = nums.size();
        vector<int> dp(n, 0);
        dp[0] = nums[0];
        int res = nums[0];// 初值给nums[0];
        for(int i = 1; i<n; i++) {
            dp[i] = max(dp[i-1]+nums[i], nums[i]);
            res = max(dp[i], res);
        }
        return res;
    }
};
