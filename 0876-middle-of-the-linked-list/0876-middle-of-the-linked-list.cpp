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
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        
        if(head->next==NULL) return head;
        if(head->next->next==NULL) return head->next;
        
        ListNode* temp = new ListNode();
        ListNode* s = temp;
        ListNode* f = temp;
        temp ->next = head;
        
        
        while(f->next!= NULL && f->next->next!=NULL){
            s=s->next;
            f=f->next->next;
        }
        
        return s->next;
    }
};