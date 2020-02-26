#define CATCH_CONFIG_MAIN
#include <catch.hpp>
#include "solution.h"

TEST_CASE("114. 二叉树展开为链表", "[flatten]")
{
    SECTION("给定二叉树 [1,2,5,3,4,null, 6]") {
        TreeNode root(1);
        TreeNode node1(2);
        TreeNode node2(5);
        TreeNode node3(3);
        TreeNode node4(4);
        TreeNode node5(6);

        root.left = &node1;
        root.right = &node2;
        node1.left = &node3;
        node1.right = &node4;
        node2.right = &node5;

        Solution s;
        s.flatten(&root);
        REQUIRE(root.right == &node1);
        REQUIRE(node1.right == &node3);
        REQUIRE(node3.right == &node4);
        REQUIRE(node4.right == &node2);
        REQUIRE(node2.right == &node5);
    }
}
