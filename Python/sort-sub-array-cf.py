import sys
input = sys.stdin.readline
output = sys.stdout.write


def max_l_r(n: int, l1: list, l2: list):
    l = r = 0
    for i in range(n):
        if l1[i] != l2[i]:
            l = i
            break
    for i in range(n-1, -1, -1):
        if l1[i] != l2[i]:
            r = i
            break
    left = l
    right = r
    for i in range(r, n-1):
        if l2[i] <= l2[i+1]:
            right += 1
    for i in range(l):
        if l2[i] <= l2[i+1]:
            left -= 1
    if left > right:
        return "1 1"
    return f"{left+1} {right+1}"

t = int(input())

for i in range(t):
    n = int(input())
    l1 = list(map(int, input().split()))
    l2 = list(map(int, input().split()))
    print(max_l_r(n, l1, l2))
