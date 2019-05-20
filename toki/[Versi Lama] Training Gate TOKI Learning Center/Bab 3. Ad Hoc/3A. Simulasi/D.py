'''input
5 3 1
1 6
3 5
2 8
'''
a = tuple(map(int, input().split()))
b = [0] * 101

c = tuple(map(int, input().split()))
for i in range(c[0], c[1]):
	b[i] += 1

c = tuple(map(int, input().split()))
for i in range(c[0], c[1]):
	b[i] += 1

c = tuple(map(int, input().split()))
for i in range(c[0], c[1]):
	b[i] += 1

tot = 0
for i in b:
	if i != 0:
		tot += a[i-1]*i

print(tot)