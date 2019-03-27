a = tuple(map(int, input().split()))
tot = 0
for i in range(a[0], a[1] + 1):
	if i % a[2] == 0:
		tot += 1

print(tot)
