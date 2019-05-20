'''input
10
1 2 3 4 -5 6 7 8 9 10
'''
input()
inp = list(map(int, input().split()))
MIN = 10000
pos = 0
for i, v in enumerate(inp):
	if v < MIN:
		MIN = v
		pos = i
print("""Menor valor: {}
Posicao: {}""".format(MIN, pos))