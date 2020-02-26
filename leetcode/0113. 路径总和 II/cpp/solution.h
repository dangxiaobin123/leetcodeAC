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
    vector<vector<int>> pathSum(TreeNode *root, int sum)
    {
        vector<vector<int>> res;
        vector<int> ans;
        helper(res, ans, root, sum);
        return res;
    }

    // 回溯
    void helper(vector<vector<int>> &res, vector<int> &ans, TreeNode *root, int sum)
    {
        if (!root) return;
        ans.push_back(root->val);
        if (!root->left && !root->right && sum == root->val) res.push_back(ans);
        helper(res, ans, root->left, sum - root->val);
        helper(res, ans, root->right, sum - root->val);
        ans.pop_back();
    }

    // 深搜
    void helper1(vector<vector<int>> &res, vector<int> ans, TreeNode *root, int sum)
    {
        if (!root) return;
        ans.push_back(root->val);
        if (!root->left && !root->right && sum == root->val) res.push_back(ans);
        helper1(res, ans, root->left, sum - root->val);
        helper1(res, ans, root->right, sum - root->val);
    }
};
