/*
Runtime: 8 ms, faster than 86.47% of C++ online submissions for Remove Duplicates from Sorted List.
Memory Usage: 11.4 MB, less than 97.35% of C++ online submissions for Remove Duplicates from Sorted List.
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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==nullptr){
            return head;
        }
        ListNode* left;
        ListNode* right;
        ListNode* dummyHead = new ListNode(-1);
        dummyHead->next = head;
        left = dummyHead;
        right = head;
        
        while(right->next!=nullptr){
            int tmp = right->val;
            right = right->next;
            if(right->val == tmp){
                left->next = right;
            }else{
                left = left->next;
            }
        }
        return dummyHead->next;
    }
};
