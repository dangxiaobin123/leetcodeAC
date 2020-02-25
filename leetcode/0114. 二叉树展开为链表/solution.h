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
    void flatten(TreeNode* root) {
        if (!root) return;
        flatten(root->left);
        flatten(root->right);
        if (!root->left) return;
        auto node = root->left;
        for(;node->right;node = node->right);
        node->right = root->right;
        root->right = root->left;
        root->left = nullptr;
    }
};
