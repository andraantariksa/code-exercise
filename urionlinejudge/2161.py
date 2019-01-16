'''input
5
'''
inp_tot = int(input(''))
n = 0.0
for _ in range(0, inp_tot):
    n = n + 6.0
    n = 1.0/n
n = n + 3.0
print("{:.11}".format(n))