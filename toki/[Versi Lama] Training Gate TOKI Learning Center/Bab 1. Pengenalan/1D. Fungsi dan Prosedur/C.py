'''input
5 2
'''
a, b = tuple(map(int, input().split()))
a, b = b, a
print(a, b)