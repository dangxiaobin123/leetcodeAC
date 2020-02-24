#define CATCH_CONFIG_MAIN
#include <catch.hpp>
#include "solution.h"

TEST_CASE("111. 二叉树的最小深度", "[minDepth]")
{
    SECTION("给定二叉树 [3,9,20,null,null,15,7]") {
        TreeNode root(3);
        TreeNode node1(9);
        TreeNode node2(20);
        TreeNode node3(15);
        TreeNode node4(7);

        root.left = &node1;
        root.right = &node2;
        node2.left = &node3;
        node2.right = &node4;

        Solution s;
        REQUIRE(s.minDepth(&root) == 2);
    }
}
