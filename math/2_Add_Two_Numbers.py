# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def addTwoNumbers(self, l1: ListNode, l2: ListNode) -> ListNode:
        
        res = []
        head = None
        tail = None
        while l1 != None or l2 != None:
            val1 = 0 if l1 == None else l1.val
            val2 = 0 if l2 == None else l2.val
            res.append(val1+val2)
            l1 = None if l1 == None else l1.next
            l2 = None if l2 == None else l2.next
        
        res.append(0)       
        for i in range(len(res)-1):
            res[i+1]  = res[i+1] + res[i]//10
            res[i] = res[i] % 10
            node = ListNode(res[i])
            if head == None:
                head = node
                tail = node
            else:
                tail.next = node
                tail = node
                
        if res[-1] !=0:
            tail.next = ListNode(res[-1])
        return head            
        
            