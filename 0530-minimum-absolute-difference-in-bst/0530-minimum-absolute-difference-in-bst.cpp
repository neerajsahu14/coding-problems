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
    int minDiff = 100000;
    int prev = -1;
    int getMinimumDifference(TreeNode* root) {
        solve(root);
        return minDiff;
    }
    void solve(TreeNode* root){
        if(!root) return;
        solve(root->left);
        if(prev != -1){
            minDiff = min(minDiff, root->val - prev);
        }
        prev = root->val;
        solve(root->right);
    }
};