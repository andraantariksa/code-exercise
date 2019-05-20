'''input
aa
1
aaaa
'''
import re

pattern = '^'+input('').replace('*', '(.*)')+'$'
inpTot = int(input(''))
for _ in range(0, inpTot):
	inp = input('')
	if re.match(pattern, inp):
		print(inp)