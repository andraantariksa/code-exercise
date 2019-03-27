	'''input
	5
	1 2 3 4 5
	'''
	import operator
	import functools

	input()
	print(functools.reduce(operator.mul, tuple(map(int, input().split()))) % 1000000007)
