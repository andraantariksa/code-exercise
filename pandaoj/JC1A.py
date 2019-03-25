'''input
2
10 5
7 3
'''
import math

for i in range(int(input())):
	x, y = tuple(map(int, input().split()))
	print("Kasus #{}: {}".format(i + 1, math.ceil(x / y)))