'''input
3 99
'''
inp = list(map(int, input().split()))
it = 1
while it < inp[1]:
	out = []
	for i in range(0, inp[0]):
		out.append(str(it+i))
	print("{}".format(" ".join(out)))
	it += inp[0]