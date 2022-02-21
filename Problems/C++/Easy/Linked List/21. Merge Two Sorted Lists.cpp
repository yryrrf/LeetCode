/*
Runtime: 4 ms, faster than 94.45% of C++ online submissions for Merge Two Sorted Lists.
Memory Usage: 15.1 MB, less than 9.05% of C++ online submissions for Merge Two Sorted Lists.
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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* dummyNode = new ListNode(0);
        ListNode* head = dummyNode;
        while(l1!=nullptr || l2!=nullptr){
            ListNode* node = new ListNode();
            if(l1==nullptr){
                node->val = l2->val;
                l2 = l2->next;
                head->next = node;
                head = head->next;
                continue;
            }else if(l2==nullptr){
                node->val = l1->val;
                l1 = l1->next;
                head->next = node;
                head = head->next;
                continue;
            }
            if(l1->val<l2->val){
                node->val = l1->val;
                l1 = l1->next;
            }else{
                node->val = l2->val;
                l2 = l2->next;
            }
            head->next = node;
            head = head->next;
        }
        return dummyNode->next;
    }
};