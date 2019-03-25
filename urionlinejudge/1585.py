'''input
4
10 20
20 14
10 100
100 100
'''
for _ in range(int(input())):
	a = list(map(int, input().split()))
	print("{} cm2".format(a[0] * a[1] // 2))