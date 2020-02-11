#define CATCH_CONFIG_MAIN
#include <catch.hpp>
#include "solution.h"

TEST_CASE("0035. 搜索插入位置", "[searchInsert]")
{
    vector<int> nums1 = {1,3,5,6};
    Solution sol;
    SECTION("searchInsert") {
        REQUIRE(sol.searchInsert(nums1, 5) == 2);
        REQUIRE(sol.searchInsert(nums1, 2) == 1);
        REQUIRE(sol.searchInsert(nums1, 7) == 4);
    }
}
