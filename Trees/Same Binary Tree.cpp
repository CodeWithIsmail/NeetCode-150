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
    vector<int> v1, v2;
    bool ans = true;
    void traversal(TreeNode *currentp, TreeNode *currentq)
    {
        if ((currentp == nullptr && currentq != nullptr) ||
            (currentq == nullptr && currentp != nullptr))
        {
            ans = false;
            return;
        }
        if (currentp == nullptr && currentq == nullptr)
            return;
        if (currentp->val != currentq->val)
        {
            ans = false;
            return;
        }
        traversal(currentp->left, currentq->left);
        traversal(currentp->right, currentq->right);
    }
    bool isSameTree(TreeNode *p, TreeNode *q)
    {
        traversal(p, q);
        return ans;
    }
};