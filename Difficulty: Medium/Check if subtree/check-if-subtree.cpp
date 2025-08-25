/* A binary tree node

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

class Solution {
  public:
    // Function to check if S is a subtree of tree T.
    bool isSubTree(Node* T, Node* S) {
        // Your code here
        if(!T) return false;
        
        if(T->data == S->data) if(is_identical(T,S)) return true;
        
        return isSubTree(T->left,S) || isSubTree(T->right,S);
    }
    
    bool is_identical(Node* T, Node* S){
        if(!T && !S) return true;
        
        if(!T || !S || S->data != T->data) return false;
        
        return is_identical(T->left,S->left) && is_identical(T->right,S->right);
    }
};