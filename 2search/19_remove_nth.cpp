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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode *first = head, *second = head;
        ListNode *ffirst;
        for(int i=0;i<n;i++)
            second = second->next;
        
        if(second==NULL)
            return head->next;
        
        while(second!=NULL){
            ffirst = first;
            first = first->next;
            second = second->next;
        }
        ffirst->next = first->next;
        return head;
    }
};
