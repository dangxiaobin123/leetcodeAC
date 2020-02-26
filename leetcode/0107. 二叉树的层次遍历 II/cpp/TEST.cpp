#define CATCH_CONFIG_MAIN
#include <catch.hpp>
#include "solution.h"

TEST_CASE("0107. 二叉树的层次遍历 II", "[levelOrderBottom]")
{
    TreeNode root(3);
    TreeNode node1(9);
    TreeNode node2(20);
    TreeNode node3(15);
    TreeNode node4(7);

    root.left = &node1;
    root.right = &node2;
    node2.left = &node3;
    node2.right = &node4;

    vector<vector<int>> ans = {{15, 7}, {9, 20}, {3}};

    Solution s;
    REQUIRE(s.levelOrderBottom(&root) == ans);
}
