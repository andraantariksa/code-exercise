'''input
0
1
5
12
22
1424
'''
while True:
	try:
		print(bin(int(input())).count("1"))
	except EOFError:
		exit()