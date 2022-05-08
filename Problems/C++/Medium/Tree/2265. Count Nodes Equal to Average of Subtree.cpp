/*
Runtime: 65 ms, faster than 12.50% of C++ online submissions for Count Nodes Equal to Average of Subtree.
Memory Usage: 11.8 MB, less than 37.50% of C++ online submissions for Count Nodes Equal to Average of Subtree.
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
    int res = 0;
    int averageOfSubtree(TreeNode* root) {
        if(root==nullptr) return 0;
        int tmp = totalSum(root)/getChildNum(root);
        if (root->val == tmp) {
            res++;
        }
        averageOfSubtree(root->left);
        averageOfSubtree(root->right);
        return res;
    }
    
    int totalSum(TreeNode* root){
        if(root==nullptr) return 0;
        int ans =root->val;
        ans+=totalSum(root->left);
        ans+=totalSum(root->right);
        return ans;
    }
    
    int getChildNum(TreeNode* root){
        if(root==nullptr) return 0;
        int ans = 1;
        ans+=getChildNum(root->left);
        ans+=getChildNum(root->right);
        return ans;
    }
};