'''input
5
10
3
0
'''
inp = -1
while True:
	inp = int(input())
	if inp == 0:
		exit()
	out = []
	for i in range(1, inp+1):
		out.append(str(i))
	print("{}".format(" ".join(out)))