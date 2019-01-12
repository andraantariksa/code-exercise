'''input
94
'''
def luckyn(n):
	nStr = str(n)
	lucky = True
	for i in nStr:
		if i != "4" and i != "7":
			lucky = False
			break
	if n%4 == 0 or n%7 == 0:
		lucky = True
	return False if lucky == False else True

inp = input('')

lucky = luckyn(int(inp))

if lucky == False:
	for i in range(44, int(inp)//2+1):
		if luckyn(i) == True:
			if int(inp)%i == 0:
				lucky = True
				break

if lucky == True:
	print("YES")
else:
	print("NO")