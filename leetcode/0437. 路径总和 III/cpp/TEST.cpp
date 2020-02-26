#define CATCH_CONFIG_MAIN
#include <catch.hpp>
#include "solution.h"

TEST_CASE("437. 路径总和 III", "[pathSum]")
{
    SECTION("给定二叉树 [10,5,-3,3,2,null,11,3,-2,null,1]") {
        TreeNode root(10);
        TreeNode node1(5);
        TreeNode node2(-3);
        TreeNode node3(3);
        TreeNode node4(2);
        TreeNode node5(11);
        TreeNode node6(3);
        TreeNode node7(-2);
        TreeNode node8(1);

        root.left = &node1;
        root.right = &node2;
        node1.left = &node3;
        node1.right = &node4;
        node2.right = &node5;
        node3.left = &node6;
        node3.right = &node7;
        node4.right = &node8;

        Solution s;
        REQUIRE(s.pathSum(&root, 8) == 3);
    }
}
