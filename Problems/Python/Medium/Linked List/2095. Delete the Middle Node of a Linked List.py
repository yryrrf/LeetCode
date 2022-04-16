'''
Runtime: 1924 ms, faster than 88.99% of Python3 online submissions for Delete the Middle Node of a Linked List.
Memory Usage: 60.6 MB, less than 84.95% of Python3 online submissions for Delete the Middle Node of a Linked List.
'''
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def deleteMiddle(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if not head.next:
            return None;
        fast = slow = pre = head;
        while fast and fast.next:
            fast = fast.next.next;
            pre = slow;
            slow = slow.next;
        pre.next = slow.next;
        return head;