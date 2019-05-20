input()
a = tuple(map(int, input().split()))
tot = 0
tot_num = 0
for i in a:
    if i >= 0:
        tot += i
        tot_num += 1

if tot_num == 0:
    tot = max(a)
    tot_num = 1

print(tot, tot_num)
