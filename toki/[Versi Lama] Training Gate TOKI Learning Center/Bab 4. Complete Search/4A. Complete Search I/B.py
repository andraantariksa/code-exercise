'''input
4
'''
def star(n: int):
	if n == 1:
		print("*")
	else:
		star(n-1)
		print("*"*n)
		star(n-1)

n = int(input())
star(n)
