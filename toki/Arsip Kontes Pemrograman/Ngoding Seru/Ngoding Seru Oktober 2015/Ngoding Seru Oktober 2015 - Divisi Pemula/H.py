'''input
wkwkwkwkwkwkw
'''

'''
Sebuah password dinyatakan kuat jika terdiri dari 8 karakter atau lebih, mengandung karakter abjad huruf besar, huruf kecil, angka, dan karakter khusus (bukan angka dan bukan huruf). Password yang tak memenuhi kriteria tersebut, digolongkan agak kuat jika mengandung lebih dari 12 karakter abjad.  Jika bukan kuat atau agak kuat, maka password tergolong lemah.
'''
import re

s = input()
if re.match(r"(?=.*[A-Z])(?=.*[a-z])(?=.*[0-9])(?=.{8,})", s):
	print("Kuat")
elif re.match(r"[A-Z|a-z]{12,}", s):
	print("AgakKuat")
else:
	print("Lemah")