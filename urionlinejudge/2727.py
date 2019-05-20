'''input
2
... ... ... ... ...
... ... ...
3
... ... ... ... ...
... ... ... ...
.
'''
while True:
	try:
		n = int(input())
	except EOFError:
		break
	for _ in range(n):
		msg = input().split()
		print(chr(97+3*(len(msg)-1)+len(msg[0])-1))
