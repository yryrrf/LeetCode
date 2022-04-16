'''
Runtime: 35 ms, faster than 92.20% of Python3 online submissions for Reverse Linked List.
Memory Usage: 20.4 MB, less than 17.50% of Python3 online submissions for Reverse Linked List.
'''
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if not head:
            return head;
        dummyHead = ListNode(0,head);
        tmp = head;
        while tmp.next:
            tmp = tmp.next;
        def recursion(n1, n2):
            if n2.next:
                recursion(n2,n2.next);
            n2.next = n1;
        recursion(dummyHead,head);
        dummyHead.next = tmp;
        head.next = None;
        return dummyHead.next;