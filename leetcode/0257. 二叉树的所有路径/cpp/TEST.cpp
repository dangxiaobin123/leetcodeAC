#define CATCH_CONFIG_MAIN
#include <catch.hpp>
#include "solution.h"

TEST_CASE("257. 二叉树的所有路径", "[binaryTreePaths]")
{
    SECTION("给定二叉树 [1, 2, 3, null, 5]") {
        TreeNode root(1);
        TreeNode node1(2);
        TreeNode node2(3);
        TreeNode node3(5);
        
        root.left = &node1;
        root.right = &node2;
        node1.right = &node3;

        Solution s;
        vector<string> ans = {"1->2->5", "1->3"};
        REQUIRE(s.binaryTreePaths(&root) == ans);
    }
}
