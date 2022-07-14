/*
Runtime: 404 ms, faster than 57.42% of C++ online submissions for Even Odd Tree.
Memory Usage: 150.9 MB, less than 77.59% of C++ online submissions for Even Odd Tree.
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
    bool isEvenOddTree(TreeNode* root) {
        queue<TreeNode*> q;
        if(root==nullptr) return true;
        q.push(root);
        int level = 0;
        while(!q.empty()) {
            int size = q.size();
            int lastVal = level % 2 == 0 ? INT_MIN : INT_MAX;
            for(int i = 0; i<size; i++){
                int tmp = q.front()->val;
                if(level%2==tmp%2) return false;
                if(level%2==1 && tmp>=lastVal) {
                    return false;
                }else if(level%2==0 && lastVal>=tmp) {
                     return false;
                }
                lastVal = tmp;
                if(q.front()->left) q.push(q.front()->left);
                if(q.front()->right) q.push(q.front()->right);
                q.pop();
            }   
            level++;
        }
        return true;
    }
};