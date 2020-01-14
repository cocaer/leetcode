class Solution {
public:
    
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL || head->next == NULL)
            return NULL;
    
        ListNode *first=head, *second = head;

        do{

            if(first==NULL||first->next==NULL)
                return NULL;
            if(second->next==NULL||second->next->next==NULL)
                return NULL;

            first = first->next;
            second = second->next->next;
        }while(first!=second);
        
        first = head;
        while(first!=second){
            first = first->next;
            second = second->next;
        }
        return first;
    }
};
