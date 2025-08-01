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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        inorderTraversal(root,ans);
        return ans;
    }
    void inorderTraversal(TreeNode* root , vector<int>& ans){
        if(root!= nullptr){
            if(root->left !=nullptr){
                inorderTraversal(root->left,ans);
            }
            ans.push_back(root->val);
            if(root->right !=nullptr){
                inorderTraversal(root->right,ans);
            }
        }
    }
};