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
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==nullptr) return 0;
        int d =0;
        height(root,d);
        return d;
    }
    int height(TreeNode* root){
        return root ==nullptr? 0 : max(height(root->left),height(root->right))+1;
    }

    int height(TreeNode* root, int &d){
        if(root==nullptr) return 0;

        int l = height(root->left, d);
        int r = height(root->right, d);
        d = max(d, l+r);
        return max(l,r)+1;
    }
};