/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Swap Nodes in Pairs.
Memory Usage: 7.6 MB, less than 5.99% of C++ online submissions for Swap Nodes in Pairs.
*/
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head == nullptr || head->next == nullptr){
            return head;
        }
        ListNode* newNode = head->next;
        head -> next = swapPairs(newNode->next);
        newNode->next = head;
 
        return newNode;
    }
};