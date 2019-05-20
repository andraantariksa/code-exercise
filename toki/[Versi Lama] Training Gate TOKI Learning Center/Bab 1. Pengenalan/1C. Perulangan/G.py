'''input
11 5
'''
a = list(map(int, input().split()))
first = True
for i in range(1, a[0]+1, a[1]):
	b = i
	out = []
	for j in range(0, a[1]-1):
		if b+j > a[0]:
			break
		out.append(b+j)
	out = map(str, out)
	if not first:
		print(" * ", end="")
	else:
		first = False
	print(" ".join(out), end="")
	b += a[1]
print()