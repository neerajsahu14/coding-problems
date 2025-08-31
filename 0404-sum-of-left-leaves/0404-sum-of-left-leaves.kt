/**
 * Example:
 * var ti = TreeNode(5)
 * var v = ti.`val`
 * Definition for a binary tree node.
 * class TreeNode(var `val`: Int) {
 *     var left: TreeNode? = null
 *     var right: TreeNode? = null
 * }
 */
class Solution {
    fun sumOfLeftLeaves(root: TreeNode?): Int {
    fun sum(root: TreeNode?, isLeft: Boolean): Int {
        if (root == null) {
            return 0
        }
        if (root.left == null && root.right == null && isLeft) {
            return root.`val`
        }
        return sum(root.left, true) + sum(root.right, false)
    }
    return sum(root,false)
    }
}