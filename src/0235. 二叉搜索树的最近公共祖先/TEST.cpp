#define CATCH_CONFIG_MAIN
#include <catch.hpp>
#include "solution.h"

TEST_CASE("235. 二叉搜索树的最近公共祖先", "[lowestCommonAncestor]")
{
    SECTION("给定二叉树 [6,2,8,0,4,7,9,null,null,3,5]") {
        TreeNode root(6);
        TreeNode node1(2);
        TreeNode node2(8);
        TreeNode node3(0);
        TreeNode node4(4);
        TreeNode node5(7);
        TreeNode node6(9);
        TreeNode node7(3);
        TreeNode node8(5);

        root.left = &node1;
        root.right = &node2;
        node1.left = &node3;
        node1.right = &node4;
        node2.left = &node5;
        node2.right = &node6;
        node4.left = &node7;
        node5.right = &node8;

        Solution s;
        REQUIRE(s.lowestCommonAncestor(&root, &node1, &node2)->val == root.val);
        REQUIRE(s.lowestCommonAncestor(&root, &node1, &node4)->val == node1.val);
    }
}
