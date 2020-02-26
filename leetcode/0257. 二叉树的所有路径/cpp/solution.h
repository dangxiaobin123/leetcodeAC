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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> res;
        helper(root, res, "");
        return res;
    }

    void helper(TreeNode *root, vector<string> &res, string s) {
        if (!root) return;
        if (s.empty()) s.append(to_string(root->val));
        else s.append("->").append(to_string(root->val));
        if (!root->left&&!root->right) res.push_back(s);
        helper(root->left, res, s);
        helper(root->right, res, s);
    }
};
