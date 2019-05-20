'''input
10
xxxiii
'''
input('')
inp = input('')
delet = 0
while 'xxx' in inp:
	inp = inp.replace('xxx', 'xx', 1)
	delet = delet+1
print(delet)