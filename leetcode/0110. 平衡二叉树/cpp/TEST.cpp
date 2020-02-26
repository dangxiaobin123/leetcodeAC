#define CATCH_CONFIG_MAIN
#include <catch.hpp>
#include "solution.h"

TEST_CASE("0107. 二叉树的层次遍历 II", "[levelOrderBottom]")
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
        REQUIRE(s.isBalanced(&root) == true);
    }

    SECTION("给定二叉树 [1,2,2,3,3,null,null,4,4]") {
        TreeNode root(1);
        TreeNode node1(2);
        TreeNode node2(2);
        TreeNode node3(3);
        TreeNode node4(3);
        TreeNode node5(4);
        TreeNode node6(4);

        root.left = &node1;
        root.right = &node2;
        node1.left = &node3;
        node1.right = &node4;
        node3.left = &node5;
        node3.right = &node6;

        Solution s;
        REQUIRE(s.isBalanced(&root) == false);
    }
}
