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
    map<int, vector<int>> mp;
    void traversal(TreeNode *current, int depth)
    {
        if (current == nullptr)
        {
            return;
        }
        mp[depth].push_back(current->val);
        traversal(current->left, depth + 1);
        traversal(current->right, depth + 1);
    }
    vector<vector<int>> levelOrder(TreeNode *root)
    {
        traversal(root, 1);
        vector<vector<int>> ans;
        for (auto x : mp)
        {
            vector<int> temp;
            for (auto y : x.second)
                temp.push_back(y);
            ans.push_back(temp);
        }
        return ans;
    }
};