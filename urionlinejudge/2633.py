'''input
3
picanha 15
coracao 14
maminha 37
4
alcatra 17
linguica 13
asinha 5
pernil 23
'''
while True:
	try:
		n = int(input())
	except EOFError:
		break
	l1 = []
	l2 = []
	for _ in range(n):
		n2 = input().split()
		l2.append(n2[0])
		l1.append(int(n2[1]))
	l1, l2 = zip(*sorted(zip(l1, l2)))
	print(" ".join(l2))
