inp = str(bin(int(input(''))))
max_ = 0
s_1 = 0
for i in inp:
    if i == "1":
        s_1 += 1
        if s_1 > max_:
            max_ = s_1
    else:
        s_1 = 0
print(max_)