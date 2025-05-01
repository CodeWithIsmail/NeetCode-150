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
    vector<int> vroot, vsub;

    void traverse(TreeNode *current, int type)
    {
        if (current == nullptr)
        {
            if (type == 1)
                vroot.push_back(INT_MIN);
            else
                vsub.push_back(INT_MIN);
            return;
        }
        if (type == 1)
            vroot.push_back(current->val);
        else
            vsub.push_back(current->val);
        traverse(current->left, type);
        traverse(current->right, type);
    }
    bool isSubtree(TreeNode *root, TreeNode *subRoot)
    {
        traverse(root, 1);
        traverse(subRoot, 2);
        for (auto x : vroot)
            cout << x << " ";
        cout << "\n";
        for (auto x : vsub)
            cout << x << " ";
        return search(vroot.begin(), vroot.end(), vsub.begin(), vsub.end()) !=
               vroot.end();
    }
};