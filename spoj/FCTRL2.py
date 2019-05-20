def fact(n):
	total = 1
	for i in range(1, n+1):
		total = total * i
	return total
 
inp_tot = int(input(''))
 
for i in range(0, inp_tot):
	inp = int(input(''))
	#print("H")
	#print(inp)
	print(fact(inp))