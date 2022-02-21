/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Sum Root to Leaf Numbers.
Memory Usage: 9.3 MB, less than 36.62% of C++ online submissions for Sum Root to Leaf Numbers.
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
    int ans = 0;
    int sumNumbers(TreeNode* root) {
        if(root==nullptr) return 0;
        dfs(root,0);
        return ans;
    }
    
    void dfs(TreeNode* node, int currNum){
        currNum = currNum*10 + node->val;
        if(node->left==nullptr && node->right==nullptr) {
            ans+=currNum;
            return;
        }
        if(node->left!=nullptr) dfs(node->left, currNum);
        
        if(node->right!=nullptr) dfs(node->right,currNum);
          
    }
};