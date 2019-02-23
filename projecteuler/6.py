'''input
1
100
'''
for i in range(int(input())):
	l = list(range(1, int(input())+1))
	sum_suare = 0
	square_sum = sum(l)**2
	for i in l:
		sum_suare = sum_suare + i**2
	print(square_sum-sum_suare)
