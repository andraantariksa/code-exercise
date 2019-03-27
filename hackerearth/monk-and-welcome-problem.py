'''input
5
1 2 3 4 5
4 5 3 2 10
'''
input()
a = tuple(map(int, input().split()))
b = tuple(map(int, input().split()))
print(" ".join([str(x + y) for x, y in zip(a, b)]))