/*
Runtime: 4 ms, faster than 54.63% of C++ online submissions for Reverse Linked List II.
Memory Usage: 7.5 MB, less than 16.45% of C++ online submissions for Reverse Linked List II.
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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* dummyNode  = new ListNode(0);
        dummyNode -> next = head;
        head = dummyNode;
        
        for(int i = 0; i<left-1; i++){
            head = head->next;
        }
        
        ListNode* l = head->next;
        ListNode* r;
        for(int i = 0; i<right - left ; i++){
            r = l->next;
            l->next = r->next;
            r->next = head->next;
            head -> next = r;
            
        }
        
        return dummyNode->next;
        
    }
};