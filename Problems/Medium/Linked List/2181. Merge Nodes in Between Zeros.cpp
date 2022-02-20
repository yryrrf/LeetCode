/*
Runtime: 1005 ms, faster than 21.05% of C++ online submissions for Merge Nodes in Between Zeros.
Memory Usage: 274.5 MB, less than 5.26% of C++ online submissions for Merge Nodes in Between Zeros.
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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* dummyHead = new ListNode(0);
        int sum = 0;
        ListNode* node = dummyHead;
        while(head!=nullptr){
            if(head->val == 0 && sum!=0){
                ListNode* tmp = new ListNode(sum);
                node->next = tmp;
                node = node->next;
                sum = 0;
            }else{
                sum+=head->val;
            }
            head = head->next;
        }
        return dummyHead->next;
    }
};