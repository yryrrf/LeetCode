/*
Runtime: 4 ms, faster than 73.85% of C++ online submissions for Binary Tree Paths.
Memory Usage: 13.9 MB, less than 16.18% of C++ online submissions for Binary Tree Paths.
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
    vector<string> ans;
    vector<string> binaryTreePaths(TreeNode* root) {
        search(root,to_string(root->val));
        return ans;
    }
    
    void search(TreeNode* node, string text){
        if(node->left!=nullptr){
            string tmp = text;
            tmp += "->" + to_string(node->left->val);
            search(node->left, tmp);
        }
        
        if(node->right!=nullptr){
            string tmp = text;
            tmp+= "->" + to_string(node->right->val);
            search(node->right,tmp);
        }
        
        if(node->right==nullptr && node->left==nullptr){
            ans.push_back(text);
        }
        
    }
};