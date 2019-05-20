'''input
7
8
10
8
260
4
10
10
'''
import collections

d = {}

for i in range(int(input())):
    n = int(input())
    if n not in d:
        d[n] = 1
    else:
        d[n] += 1

d = collections.OrderedDict(sorted(d.items()))

for k, v in d.items():
    print("{} aparece {} vez(es)".format(k, v))
