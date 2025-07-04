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
    /**
     * @brief Generates all structurally unique BSTs (binary search trees) that store values from 1 to n.
     * 
     * @param n The number of nodes with distinct values from 1 to n.
     * @return A vector of TreeNode* representing the roots of all unique BSTs.
     */
    vector<TreeNode*> generateTrees(int n) {
        if (n == 0) return {};         // Edge case: no trees can be formed
        return generate(1, n);         // Start recursive generation from 1 to n
    }

private:
    /**
     * @brief Recursive helper function to generate all unique BSTs within a given range.
     * 
     * @param left  The starting value of the current subtree range.
     * @param right The ending value of the current subtree range.
     * @return A vector of TreeNode* representing all unique BSTs formed using values in the range [left, right].
     */
    vector<TreeNode*> generate(int left, int right) {
        vector<TreeNode*> res;

        // Base case: if the range is invalid, return a tree with nullptr (representing an empty subtree)
        if (left > right) {
            res.push_back(nullptr);
            return res;
        }

        // Try every number in the current range as the root value
        for (int val = left; val <= right; ++val) {
            // Recursively generate all left subtrees with values less than 'val'
            vector<TreeNode*> leftTrees = generate(left, val - 1);
            // Recursively generate all right subtrees with values greater than 'val'
            vector<TreeNode*> rightTrees = generate(val + 1, right);

            // Combine each pair of left and right subtrees with current root
            for (TreeNode* l : leftTrees) {
                for (TreeNode* r : rightTrees) {
                    TreeNode* root = new TreeNode(val, l, r);  // Create new root with left and right subtrees
                    res.push_back(root);                       // Add to result list
                }
            }
        }

        return res;  // Return all BSTs formed in this range
    }
};