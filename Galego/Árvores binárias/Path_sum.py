#112. Path Sum
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def hasPathSum(self, root: Optional[TreeNode], targetSum: int) -> bool:

        def dfs_sum(node, current_sum):
            if node is None:
                return False

            current_sum += node.val

            if node.left is None and node.right is None:
                return current_sum == targetSum

            return dfs_sum(node.left, current_sum) or dfs_sum(node.right, current_sum)

        return dfs_sum(root, 0)
