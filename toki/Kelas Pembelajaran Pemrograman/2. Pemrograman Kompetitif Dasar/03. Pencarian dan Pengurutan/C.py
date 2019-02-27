'''input
7 2
agung 572381
ani 111111
budi 222222
dengklek 696969
ganesh 987123
gareng 429088
hadi 682385
budi
nyancoder
'''
n = tuple(map(int, input().split()))
d = {}
for _ in range(n[0]):
	s = input().split()
	d[s[0]] = s[1]
for _ in range(n[1]):
	try:
		print(d[input()])
	except KeyError:
		print("NIHIL")