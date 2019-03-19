# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None



# class Solution:
#     def inorderTraversal(self, root: TreeNode) -> List[int]:
#         self.ans = []
#         self.f(root)
#         return self.ans
        
#     def f(self, root):
#         if root == None: return 
#         if root.left != None : 
#             self.f(root.left)
#         self.ans.append(root.val)
#         if root.right != None :
#             self.f(root.right)

class Solution:
    def inorderTraversal(self, root: TreeNode) -> List[int]:
        stack, ans = [], []
        while stack  or root:
            if root:
                stack.append(root)
                root = root.left
            else:
                node =stack.pop()
                ans.append(node.val)
                root = node.right
        return ans
            
