s = input().split()
d = {}
for i in s:
    if i not in d:
        d[i] = 0
    d[i] += 1
for k, v in d.items():
    print(k, v)
