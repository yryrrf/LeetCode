/*
Runtime: 20 ms, faster than 15.82% of C++ online submissions for Linked List Cycle II.
Memory Usage: 9.5 MB, less than 12.26% of C++ online submissions for Linked List Cycle II.
*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        unordered_set<ListNode*> us;
        while(head!=nullptr){
            if(us.count(head)) return head;
            us.insert(head);
            head = head->next;
        }
        return nullptr;
    }
};