/*
Runtime: 45 ms, faster than 26.62% of C++ online submissions for Binary Tree Maximum Path Sum.
Memory Usage: 27.6 MB, less than 92.45% of C++ online submissions for Binary Tree Maximum Path Sum.
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
    int ans = INT_MIN;
    int maxPathSum(TreeNode* root) {
        search(root);
        return ans;
    }
    
    int search(TreeNode* root) {
        if(root == nullptr) return 0;
        int l = max(search(root->left),0);
        int r = max(search(root->right),0);
        ans = max(ans, root->val + l + r);
        return root->val + max(l, r);
    }
};