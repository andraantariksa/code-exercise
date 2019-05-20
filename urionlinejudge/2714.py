'''input
7
RA000000000000000001
RA000000000000000100
RA000000000000012345
RA123456789012345678
ra000000000000000333
RA12345
12345678901234567890
'''
import re

i_t = int(input(''))
for _ in range(0, i_t):
	inp = input('')
	if re.match(r"RA\d{17}", inp):
		c = re.search(r"RA0*(\d+)", inp)
		print(c.group(1))
	else:
		print("INVALID DATA")