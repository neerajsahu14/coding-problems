/*class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    Node *prev=NULL,*head=NULL;
    Node *bTreeToCList(Node *root) {
        // code here.
        if(!root) return root;
        bTreeToCList(root->left);
        if(!prev)
            head= root;
        else{
          root->left = prev;
          prev->right = root;
        }
        prev = root;
        bTreeToCList(root->right);
        prev->right = head;
        head->left = prev;
        return head;
    }
    
};