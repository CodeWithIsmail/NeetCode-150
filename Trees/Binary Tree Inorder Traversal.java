/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    List<Integer> inorder = new ArrayList<>();

    void traverse(TreeNode cur) {
        if (cur == null)
            return;
        traverse(cur.left);
        inorder.add(cur.val);
        traverse(cur.right);
    }

    public List<Integer> inorderTraversal(TreeNode root) {
        traverse(root);
        return inorder;
    }
}