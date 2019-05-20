'''input
1 1 0 1 0
0 0 1 0 0
'''
a = list(map(int, input().split()))
b = list(map(int, input().split()))

for i in range(0, len(a)):
    if (a[i] == 0 and b[i] == 0) or (a[i] == 1 and b[i] == 1):
        print("N")
        exit()

print("Y")
