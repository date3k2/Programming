from itertools import combinations
from collections import defaultdict
l = [2, 6, 3, 7]
l.sort()
sumi = 7
idx = -1
s = set(l)
d = defaultdict(list)
for i in l:
    for j in range(2, sumi//i+1):
        s.add(i*j)
        d[i*j].append(i)
# print(s)
max_num = 0
for i, id in enumerate(s):
    max_num += l[i]
    if max_num >= sumi:
        idx = i
        break
# print(idx)
for i in range(1, idx+1):
    com = combinations(s, i)
    for x in com:
        if sum(x) == sumi:
            print(x)
            la = []
            for k in x:
                if len(d[k]) == 0:
                    la.append(k)
                else:
                    for lol in range(k//d[k]):
                        la.append(d[k])
            print(la)
