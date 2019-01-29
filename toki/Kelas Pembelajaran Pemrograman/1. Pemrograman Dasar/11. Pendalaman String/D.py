'''input
abcdehalofghi
bcd
halo
semua
'''
inp1 = input('')
inp2 = input('')
inp3 = input('')
inp4 = input('')
inp1 = inp1.replace(inp2, '').split(inp3)
print(inp1[0]+inp3+inp4+inp1[1])