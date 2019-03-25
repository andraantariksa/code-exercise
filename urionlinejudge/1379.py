'''input
1 2
6 10
1 1000000000
0 0
'''
while True:
    inp = list(map(int, input().split()))
    if inp[0] == 0 and inp[1] == 0:
        break
    else:
        print(inp[0] * 2 - inp[1])
