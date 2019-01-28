'''input
9
first
first
second
second
third
third
third
second
second
third
'''
total_case = int(input(''))
username = {}
for i in range(0, total_case):
	inp = input('')
	modify = False
	if inp not in username:
		username[inp] = 0
	else:
		modify = True
		inpmod = inp + str(username[inp])
	if modify == False:
		print("OK")
	else:
		print(inpmod)
	username[inp] = username[inp] + 1