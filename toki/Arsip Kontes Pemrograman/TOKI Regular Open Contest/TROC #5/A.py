'''input
azure ayaz
'''
inp = input('').split()
if inp[1] not in inp[0]:
	print("YA\n{}bukansaitammar".format(inp[0]))
else:
	print("TIDAK")