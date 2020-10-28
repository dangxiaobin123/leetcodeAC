#define CATCH_CONFIG_MAIN
#include <catch.hpp>
#include "solution.h"

TEST_CASE("0336. 回文对", "[palindromePairs]")
{
    Solution sol;
    SECTION("searchInsert") {
        vector<string> nums1 = {"abcd","dcba","lls","s","sssll"};
        vector<vector<int>> ans = {{0,1},{1,0},{3,2},{2,4}};
        REQUIRE(sol.palindromePairs(nums1) == ans);
        
    }
    
}
