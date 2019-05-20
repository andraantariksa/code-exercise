'''input
5 6
1 3
4 2
5 2
4 5
3 2
4 1
3
2
3
4
'''
a = tuple(map(int, input().split()))
swap_l = [i for i in range(0, a[0]+1)]
for _ in range(a[1]):
    b = tuple(map(int, input().split()))
    swap_l[b[0]], swap_l[b[1]] = swap_l[b[1]], swap_l[b[0]]

for i in range(int(input())):
    print(swap_l[int(input())])