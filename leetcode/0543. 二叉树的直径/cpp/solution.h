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
    int diameterOfBinaryTree(TreeNode *root)
    {
        if (!root) return 0;
        int ans = 1;

        std::function<int(TreeNode *)> helper
        = [&helper, &ans](TreeNode * node) {
            if (!node) return 0;
            int l = helper(node->left);
            int r = helper(node->right);
            ans = max(ans, 1 + l + r);
            return 1 + max(l, r);
        };
        helper(root);
        return ans - 1;
    }
};
