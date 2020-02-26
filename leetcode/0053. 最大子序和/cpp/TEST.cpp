#define CATCH_CONFIG_MAIN
#include <catch.hpp>
#include "solution.h"

TEST_CASE("0053. 最大子序和", "[maxSubArray]")
{
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    vector<int> nums1 = {}, nums2 = {1};
    Solution sol;
    REQUIRE(sol.maxSubArray(nums) == 6);
    REQUIRE(sol.maxSubArray(nums1) == 0);
    REQUIRE(sol.maxSubArray(nums2) == 1);
}
