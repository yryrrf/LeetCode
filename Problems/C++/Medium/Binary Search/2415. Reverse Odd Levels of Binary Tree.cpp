/*
Runtime: 1845 ms, faster than 14.29% of C++ online submissions for Reverse Odd Levels of Binary Tree.
Memory Usage: 75.4 MB, less than 14.29% of C++ online submissions for Reverse Odd Levels of Binary Tree.
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
    TreeNode* reverseOddLevels(TreeNode* root) {
        int level = 0;
        queue<TreeNode*> q;
        TreeNode* dummyNode = root;
        q.push(root);
        int cnt = 1;
        vector<int> tmp;
        while(q.size()) {
            cnt = q.size();
            int tmpSize = tmp.size();
            for(int i = 1; i<=cnt; i++) {
                TreeNode* node = q.front();
                if(level%2) {
                    node->val = tmp[cnt-i];
                }
                if(node->left) {
                    tmp.push_back(node->left->val);
                    q.push(node->left);
                }
                if(node->right) {
                    tmp.push_back(node->right->val);
                    q.push(node->right);
                }
                q.pop();
            }
            for(int i = 0; i<tmpSize; i++) {
                tmp.erase(tmp.begin());
            }
            level++;
        }
        return dummyNode;
    }
};