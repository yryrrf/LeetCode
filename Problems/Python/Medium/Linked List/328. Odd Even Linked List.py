'''Runtime: 46 ms, faster than 83.42% of Python3 online submissions for Odd Even Linked List.
Memory Usage: 17.1 MB, less than 5.66% of Python3 online submissions for Odd Even Linked List.
'''
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def oddEvenList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        dummyOdd = ListNode();
        po = dummyOdd;
        dummyEven = ListNode();
        pe = dummyEven;
        tmp = head;
        cnt = 1;
        while tmp:
            if cnt%2 == 1:
                po.next = ListNode(tmp.val);
                po = po.next;
            else:
                pe.next = ListNode(tmp.val);
                pe = pe.next;
            tmp = tmp.next;
            cnt +=1;
        po.next = dummyEven.next;
        return dummyOdd.next;