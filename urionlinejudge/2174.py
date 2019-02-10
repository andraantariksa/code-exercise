'''input
8
Zubat
Zubat
Zubat
Zubat
Zubat
Zubat
Zubat
Zubat
'''
i_t = int(input(''))
pokemon = []
for _ in range(0, i_t):
	inp = input('')
	if inp not in pokemon:
		pokemon.append(inp)
print("Falta(m) {} pomekon(s).".format(151-len(pokemon)))