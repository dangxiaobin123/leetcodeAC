#include <vector>
#include <algorithm>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution
{
public:
    TreeNode *sortedArrayToBST(vector<int> &nums)
    {
        return helperBst(nums, 0, nums.size() - 1);
    }

    TreeNode *helperBst(vector<int> &nums, int l, int r)
    {
        if (l > r) return nullptr;
        int m = l + (r - l) / 2;
        TreeNode *node = new TreeNode(nums[m]);
        node->left = helperBst(nums, l, m - 1);
        node->right = helperBst(nums, m + 1, r);
        return node;
    }
};
