'''input
7 1 4
'''
inp = input('').split()
li = []
for i in inp:
	li.append(int(i))
li.sort()
print(li[2]-li[0])