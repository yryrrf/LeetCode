/*
Runtime: 16 ms, faster than 96.49% of C++ online submissions for Remove Linked List Elements.
Memory Usage: 15 MB, less than 43.21% of C++ online submissions for Remove Linked List Elements.
*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* dummyHead = new ListNode(0);
        dummyHead->next = head;
        ListNode* curr = dummyHead;
        while(curr->next!=nullptr){
            if(curr->next->val==val){
                curr->next = curr->next->next;
            }else{
                curr = curr->next;
            }
        }
        return dummyHead->next;
    }
};