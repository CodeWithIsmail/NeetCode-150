/**
 * Definition for a binary tree node.
 * struct TreeNode {s
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
    bool ans = true;
    int dfs(TreeNode *cur)
    {
        if (!cur)
            return 0;
        if (cur)
        {
            int lf = dfs(cur->left);
            int rt = dfs(cur->right);
            if (abs(lf - rt) > 1)
                ans = false;
            return 1 + max(lf, rt);
        }
        return 0;
    }
    bool isBalanced(TreeNode *root)
    {
        dfs(root);
        return ans;
    }
};