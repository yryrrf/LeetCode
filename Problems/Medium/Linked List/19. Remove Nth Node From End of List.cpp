/*
Runtime: 4 ms, faster than 79.14% of C++ online submissions for Remove Nth Node From End of List.
Memory Usage: 10.6 MB, less than 73.34% of C++ online submissions for Remove Nth Node From End of List.
*/
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummyhead = new ListNode(0);
        dummyhead -> next = head;
        ListNode* slow = dummyhead;
        ListNode* fast = head;
        while(n>0){
            n--;
            fast = fast->next;
        }
        while(fast){
            slow = slow->next;
            fast = fast->next;
        }
        slow->next = slow->next->next;
        ListNode* ans = dummyhead->next;
        
        delete dummyhead;
        return ans;
    }
};