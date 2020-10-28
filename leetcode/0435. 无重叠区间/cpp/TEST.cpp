#define CATCH_CONFIG_MAIN
#include <catch.hpp>
#include "solution.h"

TEST_CASE("435. 无重叠区间", "[eraseOverlapIntervals]")
{
    SECTION("给定二叉树 [10,5,-3,3,2,null,11,3,-2,null,1]") {
        vector<vector<int>> nums = {{1,2},{2, 3}};

        Solution s;
        REQUIRE(s.eraseOverlapIntervals(nums) == 1);
    }
}
