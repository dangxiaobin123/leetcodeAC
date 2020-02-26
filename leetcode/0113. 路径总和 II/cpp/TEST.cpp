#define CATCH_CONFIG_MAIN
#include <catch.hpp>
#include "solution.h"

TEST_CASE("113. 路径总和2", "[pathSum]")
{
    SECTION("给定二叉树 []") {
        TreeNode root(5);
        TreeNode node1(4);
        TreeNode node2(8);
        TreeNode node3(11);
        TreeNode node4(13);
        TreeNode node5(4);
        TreeNode node6(7);
        TreeNode node7(2);
        TreeNode node8(1);

        root.left = &node1;
        root.right = &node2;
        node1.left = &node3;
        node2.left = &node4;
        node2.right = &node5;
        node3.left = &node6;
        node3.right = &node7;
        node5.right = &node8;

        Solution s;
        vector<vector<int>> res = {
            {5, 4, 11, 2},
            {5, 8, 4, 5}
        };
        REQUIRE(s.pathSum(&root, 22) == res);
    }
}
