import sys
from typing import List

sys.stdin = open(r"C:\Users\nguye\Documents\Code\Programming\C++\test.inp", "r")
sys.stdout = open(r"C:\Users\nguye\Documents\Code\Programming\C++\test.out", "w")
input = sys.stdin.readline


class SegmentTree:
    def __init__(self, n: int, a: List[int]):
        """
        Initialize the segment tree with n elements and a list of n elements
        """
        self.n = n
        self.tree = [0] * (4 * n)
        self.a = a

    def build(self, v: int, tl: int, tr: int) -> None:
        """
        Build the segment tree recursively
        """
        if tl == tr:
            self.tree[v] = self.a[tl]
        else:
            tm = (tl + tr) // 2
            self.build(v * 2, tl, tm)
            self.build(v * 2 + 1, tm + 1, tr)
            self.tree[v] = max(self.tree[v * 2], self.tree[v * 2 + 1])

    def query(self, v: int, tl: int, tr: int, l: int, r: int) -> int:
        """
        Query the maximum value in the range [l, r]
        """
        if l > r:
            return -1e9
        if l == tl and r == tr:
            return self.tree[v]
        tm = (tl + tr) // 2
        return max(
            self.query(v * 2, tl, tm, l, min(r, tm)),
            self.query(v * 2 + 1, tm + 1, tr, max(l, tm + 1), r),
        )

    def update(self, v: int, tl: int, tr: int, i: int, new_val: int) -> None:
        """
        Update the value of a[i] to new_val
        """
        if tl == tr:
            self.a[i] = new_val
            self.tree[v] = new_val
        else:
            tm = (tl + tr) // 2
            if i <= tm:
                self.update(v * 2, tl, tm, i, new_val)
            else:
                self.update(v * 2 + 1, tm + 1, tr, i, new_val)
            self.tree[v] = max(self.tree[v * 2], self.tree[v * 2 + 1])


n = int(input())
a = list(map(int, input().split()))
tree = SegmentTree(n, a)
tree.build(1, 0, n - 1)
_ = input()
max_a = max(a)
min_a = min(a)
sum_a = sum(a)
while True:
    query = input().rstrip()
    if query == "find-max":
        print(max_a)
    elif query == "find-min":
        print(min_a)
    elif query == "sum":
        print(sum_a)
    elif query == "***":
        break
    else:
        _, l, r = query.split()
        print(tree.query(1, 0, n - 1, int(l) - 1, int(r) - 1))
