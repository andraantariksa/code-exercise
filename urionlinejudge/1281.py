a = int(input())
for _ in range(0, a):
    d = {}
    b = int(input())
    for _ in range(0, b):
        c = input().split()
        d[c[0]] = float(c[1])
    b = int(input())
    tot = 0.0
    for _ in range(0, b):
        c = input().split()
        tot += d[c[0]]*float(c[1])
    print("R$", "{:.2f}".format(tot))
