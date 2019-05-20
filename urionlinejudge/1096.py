'''
I=1 J=7
I=1 J=6
I=1 J=5
'''
i = 1
j = 7
while i < 10:
	print("I={} J={}".format(i, j))
	if j == 5:
		i = i + 2
		j = 7
	else:
		j = j - 1