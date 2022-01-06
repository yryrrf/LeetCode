/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Middle of the Linked List.
Memory Usage: 7.2 MB, less than 20.77% of C++ online submissions for Middle of the Linked List.
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
    ListNode* middleNode(ListNode* head) {
        ListNode* cnt = head;
        int length = 0;
        while(cnt!=nullptr){
            cnt = cnt->next;
            length++;
        }
        for(int i = 1; i<=length/2; i++){
            head = head->next;
        }
        return head;
    }
};