from collections import defaultdict


class Node:
    def __init__(self, val=0, neighbors=None):
        self.val = val
        self.neighbors = neighbors if neighbors is not None else []


class Solution:
    def dfs(self, node, node_copy):
        if not node:
            return
        self.visited.add(node.val)
        for i in node.neighbors:
            if self.copy[i.val].val == 0:
                self.copy[i.val] = Node(i.val)
            node_copy.neighbors.append(self.copy[i.val])
            if i.val not in self.visited:
                self.dfs(i, self.copy[i.val])

    def cloneGraph(self, node: 'Node') -> 'Node':
        if not node:
            return None
        self.visited = set()
        self.copy = defaultdict(Node)
        self.copy[1] = Node(node.val)
        self.dfs(node, self.copy[1])
        return self.copy[1]
