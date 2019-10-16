n = int(input())
f = {}
while n > 1:
    i = 2
    while True:
        if n % i == 0:
            if i not in f:
                f[i] = 0
            f[i] += 1
            n = n // i
            break
        i = i + 1

s = ""

for k, v in f.items():
    s += "{}".format(k)
    if v != 1:
        s += "^{}".format(v)
    s += " x "

print(s[:-3])