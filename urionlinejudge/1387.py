while True:
    inp = list(map(int, input().split()))
    if inp[0] == 0 and inp[1] == 0:
        break

    print(inp[0] + inp[1])
