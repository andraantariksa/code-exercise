'''input
9
10 20 20 10 10 30 50 10 20
'''
input('')
inp = input('').split(' ')
d = {}

for i in inp:
	if i not in d:
		d[i] = 0
	d[i] += 1

total = 0

for i in d:
	total += d[i]//2

print(total)