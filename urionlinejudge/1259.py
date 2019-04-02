odd = []
even = []
n = int(input())
for _ in range(n):
    i = int(input())
    if i % 2 == 0:
        even.append(i)
    else:
        odd.append(i)
even.sort()
odd.sort()
odd.reverse()
odd = map(str, odd)
even = map(str, even)
print("\n".join(even)+"\n"+"\n".join(odd))
