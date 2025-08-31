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
 import static java.lang.Math.abs;
class Solution {
    public int distributeCoins(TreeNode root) {
       return distributeCoin(root, null);
    }
     public int distributeCoin(TreeNode root, TreeNode parent) {
        if (root == null) return 0;
        int moves = distributeCoin(root.left, root) + distributeCoin(root.right, root);
        int x = root.val - 1;
        if (parent != null) {
            parent.val += x;
        }
        moves += Math.abs(x);
        return moves;
    }
}