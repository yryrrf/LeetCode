/*
Runtime: 8 ms, faster than 61.64% of C++ online submissions for Remove Duplicates from Sorted List II.
Memory Usage: 11.3 MB, less than 11.98% of C++ online submissions for Remove Duplicates from Sorted List II.
*/
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* ans = new ListNode(0);
        ListNode* ansPtr = ans;
        bool flag = false;
        
        while(head!=nullptr){
            if(head->next==nullptr){
                if(!flag){
                    ansPtr->next = new ListNode(head->val);
                    ansPtr = ansPtr->next;
                }
                break;
            }
            
            if(head->val == head->next->val){
                if(!flag){
                    flag = true;
                }
            }else{
                if(!flag){
                    ansPtr->next = new ListNode(head->val);
                    ansPtr = ansPtr->next;
                }else{
                    flag = false;
                }
            }
            head = head->next;
        }
        
        return ans->next;
    }
};