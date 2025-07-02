/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    bool ans = true;
    void dfs(TreeNode* cur, long long up, long long low, int type) {
        if (!cur)
            return;
        if (type == 0) {
            dfs(cur->left, cur->val, LONG_LONG_MIN, -1);
            dfs(cur->right, LONG_LONG_MAX, cur->val, 1);
        } else {
            if (cur->val >= up || cur->val <= low)
                ans = false;
        }
        dfs(cur->left, cur->val, low, -1);
        dfs(cur->right, up, cur->val, 1);
    }
    bool isValidBST(TreeNode* root) {
        dfs(root, LONG_LONG_MAX, LONG_LONG_MIN, 0);
        return ans;
    }
};