'''input
7
4 5
13 10
6 4
3 3
3 5
3 4
3 8
'''
for _ in range(int(input())):
	inp = list(map(int, input().split()))
	tot = 0
	for i in range(min(inp[0], inp[1])+1, max(inp[0], inp[1])):
		if i % 2 == 1:
			tot += i
	print(tot)