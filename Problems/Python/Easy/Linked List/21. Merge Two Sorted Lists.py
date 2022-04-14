'''
Runtime: 34 ms, faster than 94.97% of Python3 online submissions for Merge Two Sorted Lists.
Memory Usage: 13.9 MB, less than 82.94% of Python3 online submissions for Merge Two Sorted Lists.
'''
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        dummyHead = ListNode(0);
        tmp = dummyHead;
        while list1 and list2:
            if list1.val > list2.val:
                tmp.next = ListNode(list2.val);
                list2 = list2.next;
            else:
                tmp.next = ListNode(list1.val);
                list1 = list1.next;
            tmp = tmp.next;
        
        while list1:
            tmp.next = ListNode(list1.val);
            tmp = tmp.next;
            list1 = list1.next;
        while list2:
            tmp.next = ListNode(list2.val);
            tmp = tmp.next;
            list2 = list2.next;
        
        return dummyHead.next;