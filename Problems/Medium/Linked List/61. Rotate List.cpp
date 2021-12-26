/*
Runtime: 4 ms, faster than 93.60% of C++ online submissions for Rotate List.
Memory Usage: 11.8 MB, less than 5.69% of C++ online submissions for Rotate List.
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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* dummyHead = new ListNode();
        dummyHead -> next = head;
        vector<ListNode*> vec;
        while(head!=nullptr){
            ListNode* n = head;
            vec.push_back(n);
            head = head->next;
        }
        if(vec.size()==0) return dummyHead->next;
        k = k%vec.size();
        if(k!=0){
            vec[vec.size()-1]->next = dummyHead->next;
            dummyHead->next = vec[vec.size()-k];
            vec[vec.size()-k-1]->next = nullptr;
        }
        
        
        
        return dummyHead->next;
    }
};