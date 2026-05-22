"""
133. Clone Graph
# Definition for a Node.
class Node:
    def __init__(self, val = 0, neighbors = None):
        self.val = val
        self.neighbors = neighbors if neighbors is not None else []
"""

from typing import Optional
class Solution:
    def cloneGraph(self, node: Optional['Node']) -> Optional['Node']:

        if not node:
            return node

        q = deque([node])
        visited = {}
        visited[node.val] = Node(node.val, [])

        while q:
            current = q.popleft()
            current_visited = visited[current.val]

            for i in current.neighbors:
                if i.val not in visited:
                    visited[i.val] = Node(i.val, [])
                    q.append(i)

                current_visited.neighbors.append(visited[i.val])

        return visited[node.val]
