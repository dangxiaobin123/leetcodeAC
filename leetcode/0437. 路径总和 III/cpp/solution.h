#include <vector>
#include <algorithm>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    int pathSum(TreeNode* root, int sum) {
        if(!root) return 0;
        return helper(root, sum)+pathSum(root->left, sum)+pathSum(root->right, sum);
    }

    int helper(TreeNode *root, int sum) {
        if(!root) return 0;
        int ans = root->val==sum?1:0;
        ans+=helper(root->left, sum-root->val);
        ans+=helper(root->right, sum-root->val);
        return ans;
    }
};
