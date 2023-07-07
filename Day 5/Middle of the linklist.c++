class Solution {
public:
    //Two pointer approach
    ListNode* middleNode(ListNode* head) {
        ListNode * p=head;
        ListNode * q=head;
        while( q!=NULL && q->next!=NULL){
            p=p->next;
            q=q->next->next;
        }
        return p;
        
    }
};