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
        int sum = 0;
        int res = INT_MIN;// 初值给nums[0];
        for(auto n:nums) {
            sum = max(sum+n, n);
            res = max(sum, res);
        }
        return res;
    }
};
