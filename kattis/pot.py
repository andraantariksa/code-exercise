'''input
2
212
1253
'''
total_case = int(input(''))
total = 0
for i in range(0, total_case):
	inp = input('')
	total += int(inp[:-1])**(int(inp[-1:]))
print(total)