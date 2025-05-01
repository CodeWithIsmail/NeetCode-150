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
    void treeTraverse(TreeNode *current, int depth)
    {
        if (current == nullptr)
        {
            ans = max(ans, depth - 1);
            return;
        }
        treeTraverse(current->left, depth + 1);
        treeTraverse(current->right, depth + 1);
    }
    int maxDepth(TreeNode *root)
    {
        treeTraverse(root, 1);
        return ans;
    }
};