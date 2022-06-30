/*
Runtime: 76 ms, faster than 19.85% of C++ online submissions for Add Two Numbers II.
Memory Usage: 73.6 MB, less than 26.48% of C++ online submissions for Add Two Numbers II.
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
        stack<ListNode*> s1;
        stack<ListNode*> s2;
        while(l1) {
            s1.push(l1);
            l1 = l1->next;
        }
        while(l2) {
            s2.push(l2);
            l2 = l2->next;
        }
        bool carry = false;
        ListNode* dummyNode = nullptr;
        while(!s1.empty() && !s2.empty()) {
            int tmpVal = (s1.top()->val + s2.top()->val + carry);
            ListNode* tmp = new ListNode(tmpVal%10);
            carry = (tmpVal>=10);
            tmp -> next = dummyNode;
            dummyNode = tmp;
            s1.pop();
            s2.pop();
        }
        while(!s1.empty()) {
            int tmpVal = s1.top()->val + carry;
            ListNode* tmp = new ListNode(tmpVal%10);
            carry = (tmpVal>=10);
            tmp->next = dummyNode;
            dummyNode = tmp;
            s1.pop();
        }
        while(!s2.empty()) {
            int tmpVal = s2.top()->val + carry;
            ListNode* tmp = new ListNode(tmpVal%10);
            carry = (tmpVal>=10);
            tmp->next = dummyNode;
            dummyNode = tmp;
            s2.pop();
        }
        if(carry) {
            ListNode* tmp = new ListNode(1);
            tmp->next = dummyNode;
            dummyNode = tmp;
        }
        return dummyNode;
    }
};