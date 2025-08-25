/*
structure of the node of the list is as
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    // Should return head of the modified linked list
    Node* sortedInsert(Node* head, int key) {
        // Code here
        Node* new_node = new Node(key);
        if(!head) return new_node;
        if(head->data > key){ 
            new_node->next = head;
            return new_node;
        }
        Node* curr = head;
        while(curr->next && curr->next->data < key){
            curr = curr->next;
        }
        new_node->next = curr->next;
        curr->next = new_node;
        return head;
    }
};