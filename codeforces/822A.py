'''input
4 3
'''

def fact(n):
	ret = 1
	for i in range(1, n+1):
		ret = ret*i
	return ret

inp = input('').split()
lower = int(inp[0]) if int(inp[0]) < int(inp[1]) else int(inp[1])
print(fact(lower))