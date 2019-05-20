out = ""
for i in input():
	out += i.upper() if i.islower() else i.lower()
print(out)