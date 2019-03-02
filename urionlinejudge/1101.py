'''input
5 2
6 3
5 0
'''
while True:
	inp = list(map(int, input().split()))
	if inp[0] <= 0 or inp[1] <= 0:
		break
	tot_str = []
	tot = 0
	for i in range(min(inp[0], inp[1]), max(inp[0], inp[1])+1):
		tot_str.append(str(i))
		tot += i
	print("{} Sum={}".format(" ".join(tot_str), tot))