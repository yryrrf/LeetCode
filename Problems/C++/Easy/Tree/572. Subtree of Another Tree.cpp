/*
Runtime: 26 ms, faster than 86.93% of C++ online submissions for Subtree of Another Tree.
Memory Usage: 28.9 MB, less than 19.68% of C++ online submissions for Subtree of Another Tree.
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
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        return dfs(root,subRoot);
    }
    
    bool dfs(TreeNode* root, TreeNode* subRoot) {
       if(!root) return false; 
        return search(root,subRoot) || dfs(root->left, subRoot) || dfs(root->right, subRoot);
    }
    
    bool search(TreeNode* root, TreeNode* subRoot) {
        if(!root && !subRoot) return true;
        if((!root && subRoot) || (root && !subRoot) || (root->val != subRoot->val)) return false;
        return search(root->left,subRoot->left) && search(root->right, subRoot->right);
    }
};