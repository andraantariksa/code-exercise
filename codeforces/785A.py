'''input
4
Icosahedron
Cube
Tetrahedron
Dodecahedron
'''
i_t = int(input(''))
l = {
	'Tetrahedron' : 4,
	'Cube' : 6,
	'Octahedron' : 8,
	'Dodecahedron' : 12,
	'Icosahedron' : 20,
}
tot = 0
for _ in range(0, i_t):
	inp = input('')
	tot = tot + l[inp]
print(tot)