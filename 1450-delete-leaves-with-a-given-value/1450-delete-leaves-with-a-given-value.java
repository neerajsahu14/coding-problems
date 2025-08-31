/**
 * Definition for a binary tree node.
 * public class TreeNode {
 * int val;
 * TreeNode left;
 * TreeNode right;
 * TreeNode() {}
 * TreeNode(int val) { this.val = val; }
 * TreeNode(int val, TreeNode left, TreeNode right) {
 * this.val = val;
 * this.left = left;
 * this.right = right;
 * }
 * }
 */
class Solution {
    public TreeNode removeLeafNodes(TreeNode root, int T) {
        if (root==null)
            return null;
        root.left=removeLeafNodes(root.left, T);
        root.right=removeLeafNodes(root.right, T);    
        if (root.left==null && root.right==null && root.val == T)
            return null;
        return root;
    }
}