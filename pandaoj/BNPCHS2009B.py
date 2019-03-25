'''input
2
bnpchs
binanusantarauniversity
'''
for _ in range(int(input())):
	out = ""
	u = True
	for i in input():
		if u:
			out += i.upper()
			u = False
		else:
			out += i
			u = True
	print(out)
