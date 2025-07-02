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

class Solution
{
public:
    int ans = 0;
    void dfs(TreeNode *cur, int cur_mx)
    {
        if (!cur)
            return;
        if (cur_mx <= cur->val)
            ans++;
        cur_mx = max(cur_mx, cur->val);

        dfs(cur->left, cur_mx);
        dfs(cur->right, cur_mx);
    }
    int goodNodes(TreeNode *root)
    {
        dfs(root, root->val);
        return ans;
    }
};