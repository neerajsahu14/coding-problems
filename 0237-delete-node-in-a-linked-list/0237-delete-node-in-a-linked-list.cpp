/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* del_node) {
        ListNode* temp =del_node->next;
      del_node->val=temp->val;
      del_node->next=temp->next;
       delete temp;
    }
};