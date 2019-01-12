'''input
5 3
joll wuqrd
euzf un
hbnyiyc rsoqqveh
hbnyiyc joll joll euzf joll
'''
a = input('').split()
c = {}
for i in range(0, int(a[1])):
	b = input('').split()
	if len(b[1]) < len(b[0]):
		c[b[0]] = b[1]
	else:
		c[b[0]] = b[0]
d = input('').split()
e = []
for i in range(0, int(a[0])):
	e.append(c[d[i]])
print(" ".join(e))