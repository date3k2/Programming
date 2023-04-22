# import sys
# input = sys.stdin.readline
# output = sys.stdout.write
def longestSubStr(a, b):
    m = len(a)
    n = len(b)
    l = [[0 for _ in range(n+1)] for _ in range(m+1)]
    for i in range(1, m+1):
        for j in range(1, n+1):
            if a[i-1] == b[j-1]:
                l[i][j] = l[i-1][j-1]+1
            else:
                l[i][j] = max(l[i-1][j], l[i][j-1])
    return l[m][n]


print(longestSubStr('asdjb', 'asbvc'))
