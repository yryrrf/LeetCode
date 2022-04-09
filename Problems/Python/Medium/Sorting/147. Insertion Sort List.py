/*
Runtime: 287 ms, faster than 62.08% of Python3 online submissions for Insertion Sort List.
Memory Usage: 16.8 MB, less than 16.73% of Python3 online submissions for Insertion Sort List.
*/
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def insertionSortList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if head==None:
            return head
        dummyHead = ListNode(0,head)
        curr = head
        tmp = dummyHead
        pre = curr
        while curr!=None:
            if curr.val>=pre.val:
                pre = curr
                curr = curr.next
                continue
                
            tmp = dummyHead
            while tmp.next.val<=curr.val:
                tmp = tmp.next
            pre.next = curr.next
            curr.next = tmp.next
            tmp.next = curr
            curr = pre.next
        
        return dummyHead.next

        