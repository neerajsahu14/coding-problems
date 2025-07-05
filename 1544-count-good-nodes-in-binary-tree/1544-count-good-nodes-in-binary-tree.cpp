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
    int goodNodes(TreeNode* root) {
        if(!root) return 0;
        int ans =0;
        check(root, ans, root->val);
        return ans;
    }
    void check(TreeNode* root, int& ans, int max){
        if(!root) return;
        if(root->val >= max){
            ans++;
            max = root->val;
        }
        check(root->left,ans,max);
        check(root->right,ans,max);
    }
};