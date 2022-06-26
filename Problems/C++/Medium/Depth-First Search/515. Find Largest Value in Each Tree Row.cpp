/*
Runtime: 15 ms, faster than 75.63% of C++ online submissions for Find Largest Value in Each Tree Row.
Memory Usage: 22.1 MB, less than 68.26% of C++ online submissions for Find Largest Value in Each Tree Row.
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
    vector<int> largestValues(TreeNode* root) {
        if(root==nullptr) return {};
        vector<int> ans;
        dfs(root,0,ans);
        return ans;
    }
    
    void dfs(TreeNode* root, int n, vector<int>& ans) {
        if(ans.size()==n) {
            ans.push_back(root->val);
        }else {
            ans[n] = max(root->val, ans[n]);
        }
        if(root->left) {
            dfs(root->left,n+1,ans);
        }
        if(root->right) {
            dfs(root->right,n+1,ans);
        }
    }
};