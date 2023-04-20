import sys
input = sys.stdin.readline
def numberMatch(s: str):
    m = 9
    if s[0] == '0':
        return 0
    elif s[0] == '?':
        m = 9
    else:
        m = 1
    for i in range(1, len(s)):
        if s[i] == '?':
            m *= 10
    return m

t = int(input())
for i in range(t):
    # print(numberMatch(input()))
    sys.stdout.write(str(numberMatch(input())) + "\n")
