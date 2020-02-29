#define CATCH_CONFIG_MAIN
#include <catch.hpp>
#include "solution.h"

TEST_CASE("437. 路径总和 III", "[pathSum]")
{
    SECTION("给定二叉树 [1, 2, 3, 4, 5]") {
        TreeNode root(1);
        TreeNode node1(2);
        TreeNode node2(3);
        TreeNode node3(4);
        TreeNode node4(5);

        root.left = &node1;
        root.right = &node2;
        node1.left = &node3;
        node1.right = &node4;

        Solution s;
        REQUIRE(s.diameterOfBinaryTree(&root) == 3);
    }
}
