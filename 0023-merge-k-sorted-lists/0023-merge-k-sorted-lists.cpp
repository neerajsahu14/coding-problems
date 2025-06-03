/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
 #include<queue>
 class Solution {
public:
class compare{
    public:
    bool operator()(ListNode* a,ListNode* b){
        return a->val > b->val;
    }
};
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*, vector<ListNode*> , compare> minh;
        int k=lists.size();
        if(k==0) return NULL;
        for(int i=0; i<k; i++){
            if(lists[i]!=NULL){
                minh.push(lists[i]);
            }
        }
        ListNode* head= NULL;
        ListNode* tail=NULL;
        while(!minh.empty()){
            ListNode* temp= minh.top();
            minh.pop();
            if(temp->next!=NULL){
                    minh.push(temp->next);
                }
            if(head== NULL){
                head=temp;
                tail=temp;
            }
            else{
                tail->next=temp;
                tail=temp;
            }
        }
        return head;
    }
};