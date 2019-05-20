fact25 = 15511210043330985984000000
n = 0
i = 1
while True:
	if pow(3, i) <= fact25:
		n = i
	else:
		break
	i+= 1

print(n)
