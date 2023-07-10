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
    bool hasCycle(ListNode *head) {
        if(head==NULL){
            return 0;
        }
        ListNode *p=head;
        ListNode *q=head;
        while(q!=NULL && q->next !=NULL){
            p=p->next;
            q=q->next->next;
            if(p==q){
                return 1;
            }
        }
        return 0;
        
    }
};