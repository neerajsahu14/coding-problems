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
       void dfs(TreeNode* root, string s, string &smallest){
        if(root==NULL) return ;
        s+=char('a'+root->val);
        if(root->left ==NULL && root->right==NULL){
        reverse(s.begin(),s.end());
        if(smallest.empty() || s<smallest){
            smallest=s;
        }
        reverse(s.begin(), s.end());
       }
       dfs(root->left ,s,smallest);
       dfs(root->right,s,smallest);
       }
    string smallestFromLeaf(TreeNode* root) {
       string  smallest;
       dfs(root,"",smallest);
       return smallest;    
    
    }
};