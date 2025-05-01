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
    void treeTraverse(TreeNode *current)
    {
        if (current == nullptr)
            return;
        swap(current->left, current->right);
        treeTraverse(current->left);
        treeTraverse(current->right);
    }
    TreeNode *invertTree(TreeNode *root)
    {
        treeTraverse(root);
        return root;
    }
};