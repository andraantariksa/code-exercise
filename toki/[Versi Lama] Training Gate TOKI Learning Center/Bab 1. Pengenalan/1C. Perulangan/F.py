'''input
5
'''
a = int(input())
b = 0
for i in range(1, a+1):
	for _ in range(0, i):
		print(b, end="")
		b = (b+1)%10
	print()