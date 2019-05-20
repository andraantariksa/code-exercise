for _ in range(int(input())):
	a = {}
	b = {}
	c = input().split()
	for i in c[0]:
		if i not in a:
			a[i] = 0
		a[i] += 1
	for i in c[1]:
		if i not in b:
			b[i] = 0
		b[i] += 1
	if a == b:
		print("YES")
	else:
		print("NO")