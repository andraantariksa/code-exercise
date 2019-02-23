'''input
2540161
'''
import math

f_0_9 = {}
for i in range(0, 10):
	f_0_9[str(i)] = math.factorial(i)

sum_ = 0
for i in range(10, int(input())+1):
	temp = sum([f_0_9[j] for j in str(i)])
	#print("sum: {} i: {}".format(temp, i))
	if temp == i:
		sum_ += temp
print(sum_)