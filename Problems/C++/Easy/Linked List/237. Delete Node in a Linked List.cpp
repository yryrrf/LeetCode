/*
Runtime: 24 ms, faster than 22.35% of C++ online submissions for Delete Node in a Linked List.
Memory Usage: 7.6 MB, less than 74.08% of C++ online submissions for Delete Node in a Linked List.
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
    void deleteNode(ListNode* node) {
        ListNode*  tmp = node->next;
        if(tmp==nullptr) {
            node = nullptr;
        }else {
            node->val = tmp->val;
            node->next = tmp->next;
        }
    }
};