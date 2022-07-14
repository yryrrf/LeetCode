/*
Runtime: 199 ms, faster than 99.28% of C++ online submissions for Step-By-Step Directions From a Binary Tree Node to Another.
Memory Usage: 114.7 MB, less than 64.51% of C++ online submissions for Step-By-Step Directions From a Binary Tree Node to Another.
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
    string path ="";
    string getDirections(TreeNode* root, int startValue, int destValue) {
        search( root, startValue);
        string path1 = path;
        path = "";
        search( root, destValue);
        string path2 = path;
        
        string ans = "";
        int i = 0;
        while(i<path1.size() && i<path2.size() && path1[i] == path2[i]) {
            i++;
        }
        bool re = i<path1.size();
        for(int idx = i; idx<path1.size(); idx++) ans+="U";
        if(re) reverse(path1.begin(), path1.end());
        for(int idx = i; idx<path2.size(); idx++) {
            ans+=path2[idx];
        }
        
        
        return ans;
    }
    
    bool search( TreeNode* node, int& value) {
        if(node == nullptr) return false;
        if(node->val == value) {
            return true;
        }
        path+="L";
        if(search(node->left, value)) return true;
        path.pop_back();
        path+="R";
        if(search(node->right, value)) return true;
        path.pop_back();
        return false;
    }
    
};
