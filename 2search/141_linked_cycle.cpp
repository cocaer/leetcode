class Solution {
public:
    bool hasCycle(ListNode *head) {
        
        ListNode * first = head, *second=head;
        
        do{
            if(first == NULL||first->next==NULL)
                return false;
            if(second->next==NULL||second->next->next==NULL)
                return false;
            first = first->next;
            second = second->next->next;
            
        }while(first!=second);
        
        return true;
    }
};
