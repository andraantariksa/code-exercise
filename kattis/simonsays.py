'''input
1
Simon says raise your hand.
'''
inp_tot = int(input(''))
for i in range(0, inp_tot):
	inp = input('')
	if "Simon says " in inp:
		print(inp.split('Simon says ')[1])