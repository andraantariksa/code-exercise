'''input
3
21
3
123456789123456789123456789
'''
inp_tot = int(input(''))
for i in range(0, inp_tot):
	inp = int(input(''))
	count = 0
	for i2 in bin(inp).split('0b')[1]:
		if i2 == "1":
			count = count + 1
	print(count)