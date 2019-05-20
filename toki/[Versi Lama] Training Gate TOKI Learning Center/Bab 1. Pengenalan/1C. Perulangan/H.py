'''input
24
'''
a = int(input())
print(a)
for i in range(a // 2, 0, -1):
	if a % i == 0:
		print(i)