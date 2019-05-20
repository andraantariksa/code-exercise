s = input()
a = tuple(map(int, input().split()))
print("{} {}".format(s[a[0]:a[1]+1], s[a[2]:a[3]+1]))
