/*
Runtime: 872 ms, faster than 97.47% of C++ online submissions for Create Binary Tree From Descriptions.
Memory Usage: 277.8 MB, less than 76.47% of C++ online submissions for Create Binary Tree From Descriptions.
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
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        unordered_map<int,TreeNode*> um;
        unordered_map<int,int> us;
        for(auto& des: descriptions){
            int p = des[0], c = des[1], l = des[2];
            if(!um.count(p)) um[p] = new TreeNode(p);
            if(!um.count(c)) um[c] = new TreeNode(c);
            if(l) um[p]->left = um[c];
            else um[p] ->right = um[c];
            us[c]++;
        }
        TreeNode* ans;
        for(auto& it: um){
            if(!us.count(it.first)){
                ans = it.second;
                break;
            }
        }
        return ans;
    }
};