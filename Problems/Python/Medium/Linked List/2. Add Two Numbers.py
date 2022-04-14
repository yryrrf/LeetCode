'''
Runtime: 55 ms, faster than 99.83% of Python3 online submissions for Add Two Numbers.
Memory Usage: 14 MB, less than 11.30% of Python3 online submissions for Add Two Numbers.
'''
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        carry = 0;
        dummyHead = ListNode(0);
        pnt = dummyHead;
        while l1 or l2:
            l1val = l1.val if l1 else 0;
            l2val = l2.val if l2 else 0;
            tmp = 0
            if l1val + l2val + carry >=10:
                tmp = 1;
            pnt.next = ListNode((l1val+l2val+carry)%10);
            carry = tmp;
            pnt = pnt.next;
            if l1:
                l1 = l1.next;
            if l2:
                l2 = l2.next;
        if carry:
            pnt.next = ListNode(carry);
            
        return dummyHead.next;