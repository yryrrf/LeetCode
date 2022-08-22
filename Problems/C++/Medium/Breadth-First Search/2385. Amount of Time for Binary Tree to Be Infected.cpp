/*
Runtime: 957 ms, faster than 28.57% of C++ online submissions for Amount of Time for Binary Tree to Be Infected.
Memory Usage: 185.2 MB, less than 57.14% of C++ online submissions for Amount of Time for Binary Tree to Be Infected.
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
    unordered_map<int,vector<int>> toGraph(TreeNode* root) {
        unordered_map<int,vector<int>> ans;
        queue<pair<TreeNode*, int>> q;
        q.emplace(root,-1);
        while(q.size()) {
                TreeNode* tmp = q.front().first;
                if(q.front().second!=-1) {
                    ans[q.front().second].push_back(tmp->val);
                    ans[tmp->val].push_back(q.front().second);
                }
                q.pop();
                
                if(tmp->left) {
                    q.emplace(tmp->left,tmp->val);
                }
                if(tmp->right) {
                    q.emplace(tmp->right,tmp->val);
                }
            
        }
        return ans;
    }
    
    int amountOfTime(TreeNode* root, int start) {
        unordered_map<int,vector<int>> um = toGraph(root);
        unordered_set<int> us;
        queue<int> q;
        q.emplace(start);
        us.insert(start);
        int ans = -1;
        while(q.size()) {
            ans++;
            int tmp = q.size();
            for(int i = 1; i<=tmp; i++) {
                int node = q.front();
                q.pop();
                for(int& val:um[node]){
                    if(!us.count(val)) {
                        q.push(val);
                        us.insert(val);
                    }
                }
            }
        }
        return ans;
    }
};
