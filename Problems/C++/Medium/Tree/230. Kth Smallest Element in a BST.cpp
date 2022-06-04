/*
Runtime: 28 ms, faster than 21.07% of C++ online submissions for Kth Smallest Element in a BST.
Memory Usage: 24.1 MB, less than 88.21% of C++ online submissions for Kth Smallest Element in a BST.
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
    int kthSmallest(TreeNode* root, int k) {
        stack<TreeNode*> stk;
        while(root!=nullptr || !stk.empty()){
            while(root!=nullptr){
                stk.push(root);
                root = root->left;
            }
            root = stk.top();
            stk.pop();
            k--;
            if(k==0){
                return root->val;
            }
            root = root->right;
            
        }
        return root->val;
    }
};