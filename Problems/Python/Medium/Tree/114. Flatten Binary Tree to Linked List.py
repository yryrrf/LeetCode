'''
Runtime: 38 ms, faster than 88.08% of Python3 online submissions for Flatten Binary Tree to Linked List.
Memory Usage: 15.2 MB, less than 88.87% of Python3 online submissions for Flatten Binary Tree to Linked List.
'''
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def flatten(self, root: Optional[TreeNode]) -> None:
        if root is None:
            return;
        if not root.left and not root.right:
            return;
        array = [];
        def preorder(node):
            if node is None:
                return;
            array.append(node);
            preorder(node.left);
            preorder(node.right);
        preorder(root);
        tmp = root;
        root.left = None;
        for item in array:
            tmp.right = item;
            item.left = None;
            tmp = tmp.right;
        """
        Do not return anything, modify root in-place instead.
        """
        