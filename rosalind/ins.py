input()
a = list(map(int, input().split()))
op = 0
for i in range(1, len(a)):
    k = i
    while k > 0 and a[k] < a[k-1]:
        a[k], a[k-1] = a[k-1], a[k]
        k -= 1
        op += 1

print(op)
