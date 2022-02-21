/*
Runtime: 24 ms, faster than 88.35% of C++ online submissions for Add Two Numbers.
Memory Usage: 71.4 MB, less than 47.81% of C++ online submissions for Add Two Numbers.
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = nullptr, *tail = nullptr;
        int carry = 0;
        while(l1 || l2){
            int n1 = l1?l1->val:0;
            int n2 = l2?l2->val:0;
            int sum = carry + n1 + n2;
            
            if(!head){
                head = tail = new ListNode(sum%10);
            }else{
                tail -> next = new ListNode(sum%10);
                tail = tail->next;
            }
            
            carry = sum/10;
            
            if(l1){
                l1 = l1->next;
            }
            if(l2){
                l2 = l2->next;
            }
            
        }
        if(carry){
            tail->next = new ListNode(carry);
        }
        return head;
    }
};