_2017 = "2017"
j = 0
sum_ = 0
str_t = ""
for _ in range(32):
	str_t += _2017[j]
	sum_ += int(str_t)

	j += 1
	if j > 3:
		j = 0

print(str(sum_)[-5:])