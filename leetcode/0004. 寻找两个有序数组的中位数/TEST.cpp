#define CATCH_CONFIG_MAIN
#include <catch.hpp>
#include "solution.h"

TEST_CASE() {
    vector<int> nums1 = {1,3};
    vector<int> nums2 = {2};
    Solution s;
    REQUIRE(s.findMedianSortedArrays(nums1, nums2)==2.0);
    nums1 = {1,2};
    nums2 = {3,4};
    REQUIRE(s.findMedianSortedArrays(nums1, nums2)==2.5);
}
