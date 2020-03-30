#define CATCH_CONFIG_MAIN
#include <catch.hpp>
#include "solution.h"

TEST_CASE("0034. 在排序数组中查找元素的第一个和最后一个位置", "[searchRange]")
{
    Solution sol;
    SECTION("searchRange") {
        vector<int> nums1 = {5,7,7,8,8,10};
        REQUIRE(sol.searchRange(nums1, 8) == vector<int>{3, 4});
        REQUIRE(sol.searchRange(nums1, 6) == vector<int>{-1, -1});
    }
    SECTION("searchRange1") {
        vector<int> nums1 = {2,2};
        REQUIRE(sol.searchRange(nums1, 3) == vector<int>{-1, -1});
    }
}
