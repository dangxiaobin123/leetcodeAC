#define CATCH_CONFIG_MAIN
#include <catch.hpp>
#include "solution.h"
vector<int> inorderTraversal(TreeNode *root)
{
    vector<int> ret;
    for (std::stack<TreeNode *> s; !s.empty() || root; ) {
        if (root) {
            s.push(root);
            root = root->left;
        } else {
            root = s.top(); s.pop();
            ret.push_back(root->val);
            root = root->right;
        }
    }
    return ret;
}

TEST_CASE("0108. 将有序数组转换为二叉搜索树", "[levelOrderBottom]")
{
    vector<int> nums = {-10, -3, 0, 5, 9};

    Solution s;
    TreeNode *root = s.sortedArrayToBST(nums);
    for (auto i : inorderTraversal(root))
        std::cout << i << " ";
    std::cout << std::endl;
}
