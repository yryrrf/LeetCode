/*
Runtime: 108 ms, faster than 95.96% of C++ online submissions for Range Sum of BST.
Memory Usage: 64.6 MB, less than 91.60% of C++ online submissions for Range Sum of BST.
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
    int rangeSumBST(TreeNode* root, int low, int high) {
        return recursion(root,low,high);
    }
    
    int recursion(TreeNode* root,int low,int high){
        if(root){
            if(root->val >= low and root->val <= high){
                return root->val + recursion(root->left,low,high) + recursion(root->right, low, high);
            }else if(root->val<low){
                return recursion(root->right,low,high);
            }else if(root->val>high){
                return recursion(root->left,low,high);
            }
        }
     return 0;   
    }
};