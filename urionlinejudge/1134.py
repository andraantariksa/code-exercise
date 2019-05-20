'''input
8
1
7
2
2
4
'''
a = 0
b = 0
c = 0
inp = 0
while inp != 4:
	inp = int(input())
	if inp == 1:
		a += 1
	elif inp == 2:
		b += 1
	elif inp == 3:
		c += 1
print("""MUITO OBRIGADO
Alcool: {}
Gasolina: {}
Diesel: {}""".format(a, b, c))