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

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        return hasSubTree(root,subRoot);
    }
    bool hasSubTree(TreeNode* root, TreeNode* subRoot){
        if(!root) return false;
        if(root->val == subRoot->val){
            if(sameTree(root,subRoot))
                return true;
        }
        return hasSubTree(root->left,subRoot) || hasSubTree(root->right,subRoot);
    }
    bool sameTree(TreeNode* root, TreeNode* subRoot){
        if(!root && !subRoot) return true;
        if(!root || !subRoot) return false;
        if(root->val != subRoot->val) return false;
        return sameTree(root->left,subRoot->left) && sameTree(root->right,subRoot->right);
    }
};