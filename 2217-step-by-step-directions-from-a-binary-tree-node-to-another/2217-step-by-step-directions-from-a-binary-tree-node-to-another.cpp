/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    string getDirections(TreeNode* root, int startValue, int destValue) {
        vector<string> start, dest;
        solve_from_root(root, startValue, start);
        solve_from_root(root, destValue, dest);
        int len = 0;
        while (len < start.size() && len < dest.size() &&
               start[len] == dest[len])
            len++;
        vector<string> ans(start.size() - len, "U");
        ans.insert(ans.end(), dest.begin() + len, dest.end());
        string answer;
        for (auto& it : ans) {
            answer += it;
        }
        return answer;
    }

private:
    bool solve_from_root(TreeNode* root, int target, vector<string>& path) {
        if (!root)
            return false;
        if (root->val == target)
            return true;
        path.push_back("R");
        if (solve_from_root(root->right, target, path))
            return true;
        path.pop_back();
        path.push_back("L");
        if (solve_from_root(root->left, target, path))
            return true;
        path.pop_back();
        return false;
    }
};