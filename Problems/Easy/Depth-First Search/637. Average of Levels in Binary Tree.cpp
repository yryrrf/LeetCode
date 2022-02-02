/*
Runtime: 16 ms, faster than 72.97% of C++ online submissions for Average of Levels in Binary Tree.
Memory Usage: 22.5 MB, less than 33.96% of C++ online submissions for Average of Levels in Binary Tree.
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
    vector<double> ans = {};
    vector<int> cnt = {};
    vector<double> averageOfLevels(TreeNode* root) {
        dfs(root, 0);
        for(int i = 0; i<ans.size();i++){
            ans[i]/=cnt[i];
        }
        return ans;
    }
    
    void dfs(TreeNode* root, int level){
        double tmp = (double)root->val;
        if(ans.size()<=level){
            ans.push_back(tmp);
            cnt.push_back(1);
        }else{
            ans[level]+=tmp;
            cnt[level]++;
        }
        if(root->left!=nullptr) dfs(root->left, level+1);
        if(root->right!=nullptr) dfs(root->right, level+1);
    }
};