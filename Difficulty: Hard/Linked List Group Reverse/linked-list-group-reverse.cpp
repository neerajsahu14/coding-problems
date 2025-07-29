class Solution {
public:
    Node* reverseKGroup(Node* head, int k) {

        // Reverse first k nodes
        if(head == nullptr) return head;
        Node* prev = nullptr;
        Node* curr = head;
        Node* next = nullptr;
        int i = 0;
        while (i < k && curr != nullptr) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            i++;
        }
        head->next = reverseKGroup(curr, k);
        return prev;
    }
};
