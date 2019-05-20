'''input
THE RAIN IN SPAIN
'''
inp = input('').split()
check = []
for i in inp:
	if i not in check:
		check.append(i)
	else:
		print("no")
		exit()
print("yes")