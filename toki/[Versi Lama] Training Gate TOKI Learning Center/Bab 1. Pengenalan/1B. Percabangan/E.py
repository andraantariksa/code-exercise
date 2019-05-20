'''input
-1 -1 1 1
'''
a = list(map(int, input().split()))
print(abs(a[2]-a[0]) + abs(a[3]-a[1]))
