'''input
6
African elephant
White tiger
Indian elephant
Siberian tiger
Tiger
Panda bear
1
Blue Russian Penguin
0
'''
o = 1
while True:
	inp_tot = int(input(''))
	if inp_tot == 0:
		break
	print("List "+str(o)+":")
	animal = {}
	for i in range(0, inp_tot):
		inp = input('').split()
		if len(inp) == 1:
			if inp[0].lower() not in animal:
				animal[inp[0].lower()] = 0
			animal[inp[0].lower()] += 1
		else:
			if inp[len(inp)-1].lower() not in animal:
				animal[inp[len(inp)-1].lower()] = 0
			animal[inp[len(inp)-1].lower()] += 1
	animal_sort = list(sorted(animal.keys()))
	for i in animal_sort:
		print(i+" | "+str(animal[i]))
	o += 1