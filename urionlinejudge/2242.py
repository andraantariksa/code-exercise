'''input
huaauhahhuahau
'''
inp = input('')
vowel = ""
for i in inp:
	if i == "a" or i == "i" or i == "u" or i == "e" or i == "o":
		vowel += i
if vowel == vowel[::-1]:
	print("S")
else:
	print("N")