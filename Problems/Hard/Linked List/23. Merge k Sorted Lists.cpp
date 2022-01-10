/*
Runtime: 732 ms, faster than 5.05% of C++ online submissions for Merge k Sorted Lists.
Memory Usage: 13.7 MB, less than 32.49% of C++ online submissions for Merge k Sorted Lists.
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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* dummyNode = new ListNode();
        ListNode* head = dummyNode;
        pair<int,int> pr = {INT_MAX, 0};
        bool flag = true;
        while(flag){
            flag = false;
            pr = {INT_MAX, 0};
            for(int i = 0; i<lists.size();i++){
                if(lists[i]==nullptr) continue;
                flag = true;
                if(lists[i]->val < pr.first){
                    pr = {lists[i]->val, i};
                }
            }
            if(flag == false) break;
            head -> next = new ListNode(pr.first);
            head = head->next;
            lists[pr.second] = lists[pr.second]->next;
        }
        return dummyNode->next;
        
    }
};