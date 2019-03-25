'''input
123 45
'''
a, b = tuple(input().split())
tot = 0
for i in a:
	for j in b:
		tot += int(i)*int(j)

print(tot)