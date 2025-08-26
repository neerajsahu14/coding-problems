/*The structure of the node is
struct Node
{
    int data;
    struct Node *next;

    Node(int x){
        data = x;
        next = NULL;
    }

};
*/
class Solution {
  public:
    int fractional_node(struct Node *head, int k) {
        // your code here
        int count =0;
        Node* t = head;
        while(t){
            t = t->next;
            count++;
        }
        int i= count/k;
        if(count%k!=0) i++;
        t = head;
        while(t){
            i--;
            if(i==0){
                return t->data;
            }
            t = t->next;
        }
    }
};