#define CATCH_CONFIG_MAIN
#include <catch.hpp>
#include "solution.h"

TEST_CASE("0140. 单词拆分 II", "[wordBreak]")
{
    Solution sol;
    SECTION("searchInsert") {
        string s = "catsanddog";
        vector<string> wordDict = {"cat","cats","and","sand","dog"};
        vector<string> res = {"cats and dog","cat sand dog"};
        REQUIRE(sol.wordBreak(s, wordDict) == res);
        
    }
    
}
