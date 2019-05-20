'''input
1
100
'''
import math
for _ in range(int(input())): print(sum(map(int, list(str(math.factorial(int(input())))))))