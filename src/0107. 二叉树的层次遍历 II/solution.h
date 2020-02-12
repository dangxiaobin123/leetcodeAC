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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        int d = depth(root);
        vector<vector<int>> res(d, vector<int>({}));
        helper(res, root, d-1);
        return res;
    }
    //获取深度
    int depth(TreeNode* root) {
        if(!root) return 0;
        int l = depth(root->left);
        int r = depth(root->right);
        return max(l, r)+1;
    }

    void helper(vector<vector<int>>& res, TreeNode* root, int level) {
        if(!root) return;
        //先序遍历
        res[level].push_back(root->val);
        helper(res, root->left, level-1);
        helper(res, root->right, level-1);
    }
};
