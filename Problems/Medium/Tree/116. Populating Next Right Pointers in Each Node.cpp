/*
Runtime: 16 ms, faster than 88.60% of C++ online submissions for Populating Next Right Pointers in Each Node.
Memory Usage: 17.3 MB, less than 19.14% of C++ online submissions for Populating Next Right Pointers in Each Node.
*/
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(root==NULL) return root;
        queue<Node*> qe;
        qe.push(root);
        while(!qe.empty()){
            int s = qe.size();
            for(int i = 0; i<s; i++){
                Node* node = qe.front();
                qe.pop();
                if(i != s-1) node->next = qe.front();
                if(node->left!=NULL) qe.push(node->left);
                if(node->right!=NULL) qe.push(node->right);
            }
        }
        
        return root;
    }
};