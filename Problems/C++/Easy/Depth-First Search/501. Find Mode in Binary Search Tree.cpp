/*
Runtime: 55 ms, faster than 8.86% of C++ online submissions for Find Mode in Binary Search Tree.
Memory Usage: 25.3 MB, less than 58.93% of C++ online submissions for Find Mode in Binary Search Tree.
*/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    unordered_map<int,int> um;
    vector<int> ans;
    int maxTime = 0;
    void update(const int& n){
        um[n]++;
        if(um[n]==maxTime) {
            bool tmp = true;
            for(int num:ans) {
                if(num==n) tmp = false;
            }
            if(tmp) ans.push_back(n);
        }else if(um[n]>maxTime) {
            maxTime = um[n];
            ans = {n};
        }
    }
    
    vector<int> findMode(TreeNode* root) {
        TreeNode* pre = nullptr, *curr = root;
        
        while(curr) {
            if(!curr->left) {
                update(curr->val);
                curr = curr->right;
                continue;
            }
            
            pre = curr->left;
            while(pre->right && pre->right!= curr) {
                pre = pre->right;
            }
            if(pre->right) {
                pre->right = nullptr;
                update(curr->val);
                curr = curr->right;
            }else{
                pre -> right = curr;
                curr = curr->left;
            }
        }
        
   
        return ans;
    }
};