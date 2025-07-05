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
    bool isSymmetric(TreeNode* root) {
        return mirror(root,root);
    }
    bool mirror(TreeNode* ptr1, TreeNode* ptr2){
        if(ptr1==NULL && ptr2==NULL) return true;
        if(ptr1==NULL || ptr2== NULL) return false;
        return (ptr1->val==ptr2-> val) && mirror(ptr1->left, ptr2->right)  && mirror(ptr1->right, ptr2->left); 
    }
};