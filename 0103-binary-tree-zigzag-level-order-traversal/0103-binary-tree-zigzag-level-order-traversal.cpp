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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root == nullptr) return {};
        vector<vector<int>> ans;
        queue<TreeNode*> q;
        bool oddLavel = false;
        q.push(root);
        while(!q.empty()){
            int lavelSize = q.size();
            vector<int>vec(lavelSize , 0);
            if(oddLavel){
                for(int i =0;i<lavelSize; i++){
                    TreeNode* node = q.front();
                    vec[lavelSize-i-1] = node->val;
                    q.pop();
                    if(node->left)
                        q.push(node->left);
                    if(node->right)
                        q.push(node->right);
                }
            }else{
                for(int i =0;i<lavelSize; i++){
                    TreeNode* node = q.front();
                    vec[i] = node->val;
                    q.pop();
                    if(node->left)
                        q.push(node->left);
                    
                    if(node->right)
                        q.push(node->right);
                    
                }
            }
            oddLavel = !oddLavel;
            ans.push_back(vec);
        }
        return ans;
    }
};