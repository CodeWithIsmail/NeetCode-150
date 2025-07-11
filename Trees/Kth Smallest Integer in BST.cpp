/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution
{
public:
    vector<int> el;
    void inorder(TreeNode *cur)
    {
        if (!cur)
            return;
        inorder(cur->left);
        el.push_back(cur->val);
        inorder(cur->right);
    }
    int kthSmallest(TreeNode *root, int k)
    {
        inorder(root);
        return el[k - 1];
    }
};
