inp = int(input())
for _ in range(0, inp):
    c = input().split()
    a = int(c[0])
    b = int(c[1])
    print(len(str(a**b)))