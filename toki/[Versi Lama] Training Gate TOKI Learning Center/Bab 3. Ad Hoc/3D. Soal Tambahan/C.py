s = input().split()
out = []
for i in s:
    if i == i[::-1]:
        out.append(i)
print(" ".join(out))
