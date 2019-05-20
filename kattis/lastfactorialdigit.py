'''input
1
5
'''
def fact(n):
	tot = 1
	while n != 0:
		tot = tot * n
		n = n - 1
	return str(tot)

inp_tot = int(input(''))
for i in range(0, inp_tot):
	inp = int(input(''))
	print(fact(inp)[-1:])