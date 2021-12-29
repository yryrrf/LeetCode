/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Symmetric Tree.
Memory Usage: 16.7 MB, less than 6.97% of C++ online submissions for Symmetric Tree.
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
    bool isSymmetric(TreeNode* root) {
        if(root==nullptr) return true;
        queue<TreeNode*> qe;
        qe.push(root);
        qe.push(root);
        while(!qe.empty()){
            TreeNode* l = qe.front();
            qe.pop();
            TreeNode* r = qe.front();
            qe.pop();
            if(l==nullptr && r==nullptr) continue;
            if(l==nullptr || r==nullptr) return false;
            if(l->val != r->val) return false;
            qe.push(l->left);
            qe.push(r->right);
            
            qe.push(l->right);
            qe.push(r->left);
        }
        return true;
        
    }
};