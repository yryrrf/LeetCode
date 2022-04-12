'''
Runtime: 1218 ms, faster than 5.03% of Python3 online submissions for Sort List.
Memory Usage: 30.9 MB, less than 27.58% of Python3 online submissions for Sort List.
'''
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def sortList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if not head or not head.next:
            return head;
        
        slow, fast = head, head.next;
        while fast and fast.next:
            slow = slow.next;
            fast = fast.next.next;
        mid = slow.next;
        slow.next = None;
        
        left = self.sortList(head);
        right = self.sortList(mid);
        
        dummyHead = tmp = ListNode(0);
        while left and right:
            if left.val<=right.val:
                tmp.next = ListNode(left.val);
                left = left.next;
            else:
                tmp.next = ListNode(right.val);
                right = right.next;
            tmp = tmp.next;
        
        if left:
            tmp.next = left;
        else:
            tmp.next = right;
                
        return dummyHead.next;
        