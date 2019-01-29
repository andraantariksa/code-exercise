'''input
sabunkeramaskekerara kera
'''
inp = input('').split()
string = inp[0]
while inp[1] in string:
	string = string.replace(inp[1], '')
print(string)