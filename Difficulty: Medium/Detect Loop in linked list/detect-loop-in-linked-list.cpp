/*
struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
} */
class Solution {
  public:
    // Function to check if the linked list has a loop.
    bool detectLoop(Node* head) {
        // code here
        Node* slow = head;
        Node* fast = head->next;
        while(fast!= nullptr && fast->next != nullptr && fast != slow){
            slow = slow->next;
            fast= fast->next->next;
        }
        if(slow == fast) return true;
        return false;
    }
};