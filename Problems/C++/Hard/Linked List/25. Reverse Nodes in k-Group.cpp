/*
Runtime: 17 ms, faster than 78.82% of C++ online submissions for Reverse Nodes in k-Group.
Memory Usage: 12.1 MB, less than 5.47% of C++ online submissions for Reverse Nodes in k-Group.
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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* dummyHead = new ListNode(0);
        dummyHead-> next = head;
        ListNode* p1 = dummyHead, *p2 = head;
        while(p2!=nullptr) {
            for(int i= 0; i<k-1 && p2 != nullptr; ++i) {
                p2 = p2->next;
            }
            if(p2==nullptr) break;
            ListNode* p3 = p2->next;
            p2->next = nullptr;
            ListNode* tmp = p1->next;
            p1->next = reverse(tmp);
            p1 = tmp;
            p1->next = p3;
            p2 = p3;
        }
        return dummyHead -> next;
    }
    
    ListNode* reverse(ListNode* head) {
        stack<ListNode*> stk;
        while(head!=nullptr) {
            stk.push(head);
            head = head->next;
        }
        ListNode* dummyHead = stk.top();
        ListNode* tmp = dummyHead;
        while(!stk.empty()){
            tmp->next = stk.top();
            tmp = tmp ->next;
            stk.top()->next = nullptr;
            stk.pop();
        }
        return dummyHead;
    }
};