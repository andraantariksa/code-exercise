a = int(input())
b = tuple(map(int, input().split()))
c = int(input())
for i in range(a):
	if b[i] == c:
		print(i)
		exit()