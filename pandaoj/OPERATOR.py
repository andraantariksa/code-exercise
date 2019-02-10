'''input
5
1 2 3
3 1 2
2 2 4
2 4 8
3 7 0
'''
t_i = int(input(''))
for i in range(1, t_i+1):
	inp = input('').split()
	a = int(inp[0])
	b = int(inp[1])
	c = int(inp[2])
	if a+b == c:
		operator = "+"
	elif a-b == c:
		operator = "-"
	elif a*b == c:
		operator = "*"
	elif a/b == c:
		operator = "/"
	else:
		operator = "TIDAK ADA SOLUSI"
	print("Kasus #{}: {}".format(i, operator))