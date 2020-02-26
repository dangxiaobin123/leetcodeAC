#define CATCH_CONFIG_MAIN
#include <catch.hpp>
#include "solution.h"

TEST_CASE("Test_TwoSum") {
    vector<int> nums1 = {2, 7, 11, 15};
    Solution s;
    REQUIRE(s.twoSum(nums1, 9)==vector<int>{0,1});
}
