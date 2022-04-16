'''
Runtime: 1077 ms, faster than 91.60% of Python3 online submissions for Swapping Nodes in a Linked List.
Memory Usage: 48.2 MB, less than 98.42% of Python3 online submissions for Swapping Nodes in a Linked List.
'''
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def swapNodes(self, head: Optional[ListNode], k: int) -> Optional[ListNode]:
        fast = slow = head;
        for i in range(k-1):
            fast = fast.next;
        tmp = fast;
        while fast.next: 
            fast= fast.next;
            slow = slow.next;
        tmp.val,slow.val = slow.val,tmp.val;
        return head;