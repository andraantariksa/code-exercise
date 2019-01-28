'''input
SANTACLAUS
DEDMOROZ
SANTAMOROZDEDCLAUS
'''
inp1 = input('')
inp2 = input('')
inp3 = input('')

inp12 = inp1+inp2
if len(inp3) == len(inp12):
	letter1 = {}
	letter2 = {}
	for i in inp3:
		if i not in letter1:
			letter1[i] = 0
		letter1[i] = letter1[i]+1
	letter2 = {}
	for i in inp12:
		if i not in letter2:
			letter2[i] = 0
		letter2[i] = letter2[i]+1
	for i in letter1:
		if i not in letter2:
			print("NO")
			exit()
		else:
			if letter1[i] != letter2[i]:
				print("NO")
				exit()
	print("YES")
else:
	print("NO")