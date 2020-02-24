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
    bool isBalanced(TreeNode* root) {
        int h = 0;
        return helper(root, h);
    }

    bool helper(TreeNode *root, int &d) {
        if (!root) return true;
        int l = 0, r = 0;
        if(!helper(root->left, l)) return false;
        if(!helper(root->right, r)) return false;
        if(abs(l-r)>1) return false;
        d = 1+max(l, r);
        return true;
    }
};
