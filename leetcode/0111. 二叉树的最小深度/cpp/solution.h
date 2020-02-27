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
    int minDepth(TreeNode* root) {
        // if(!root) return 0;
        // if(!root->left&&!root->right) return 1;
        // int l = minDepth(root->left);
        // int r = minDepth(root->right);
        // if(!(root->left&&root->right)) return 1+max(l, r);
        // return 1+min(l, r);
        if (!root) return 0;
        if (!root->left) return 1+minDepth(root->right);
        if (!root->right) return 1+minDepth(root->left);
        return 1+min(minDepth(root->left), minDepth(root->right));
    }
};
