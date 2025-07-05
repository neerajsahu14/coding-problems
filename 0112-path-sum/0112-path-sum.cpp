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
class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(!root) return false;
        return solve(root, targetSum,0);
    }
    bool solve(TreeNode* root, int targetSum,int currSum){
        if (!root) return false;
        if(!root->left && !root->right && currSum+root->val==targetSum) return true;
        if (solve(root->left,targetSum, currSum+ root->val) || solve(root->right,targetSum, currSum+ root->val)) return true;
        return false;
    }
};