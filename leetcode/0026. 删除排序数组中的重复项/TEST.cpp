#define CATCH_CONFIG_MAIN
#include <catch.hpp>
#include "solution.h"

TEST_CASE("26. 删除排序数组中的重复项", "[removeDuplicates]")
{
    vector<int> nums1 = {1, 1, 2};
    vector<int> nums2 = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    Solution sol;

    SECTION("removeDuplicates") {
        REQUIRE(sol.removeDuplicates(nums1) == 2);
        REQUIRE(sol.removeDuplicates(nums2) == 5);
    }
    SECTION("unique") {
        REQUIRE(sol.unique(nums1) == 2);
        REQUIRE(sol.unique(nums2) == 5);
    }
}
