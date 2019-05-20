'''input
5 13
'''
a = tuple(map(int,input().split()))
for i in range(a[0]):
	if (i - (a[0] - i)) == a[1]:
		print("YES")
		exit()

print("NO")
