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
    map<int, vector<int>> levelorder;
    void traverse(TreeNode *cur, int level)
    {
        if (cur == nullptr)
            return;
        levelorder[level].push_back(cur->val);
        traverse(cur->left, level + 1);
        traverse(cur->right, level + 1);
    }
    vector<int> rightSideView(TreeNode *root)
    {
        vector<int> ans;

        traverse(root, 0);
        for (auto x : levelorder)
        {
            ans.push_back(x.second.back());
        }
        return ans;
    }
};