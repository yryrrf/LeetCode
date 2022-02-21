/*
Runtime: 32 ms, faster than 96.03% of C++ online submissions for Reorder List.
Memory Usage: 18.9 MB, less than 14.47% of C++ online submissions for Reorder List.
*/
class Solution {
public:
    void reorderList(ListNode* head) {
        vector<ListNode*> vec;
        ListNode* node = head;
        int i = 0;
        while(node!=nullptr){
            vec.push_back(node);
            i++;
            node = node->next;
        }
        int j = i-1;
        i = 0;
        while(i<j){
            vec[i] -> next = vec[j];
            i++;
            if(i==j) break;
            vec[j]->next = vec[i];
            j--;
        }
         vec[i]->next = nullptr;
    }
};