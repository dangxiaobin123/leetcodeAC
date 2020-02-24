#define CATCH_CONFIG_MAIN
#include <catch.hpp>
#include "solution.h"

TEST_CASE("0027. 移除元素", "[removeElement]")
{
    vector<int> nums1 = {3, 2, 2, 3};
    vector<int> nums2 = {0, 1, 2, 2, 3, 0, 4, 2};
    Solution sol;
    SECTION("removeElement") {
        REQUIRE(sol.removeElement(nums1, 3) == 2);
        REQUIRE(sol.removeElement(nums2, 2) == 5);
    }
    SECTION("removeEleOfVector") {
        REQUIRE(sol.removeEleOfVector(nums1, 3) == 2);
        REQUIRE(sol.removeEleOfVector(nums2, 2) == 5);
    }
}
