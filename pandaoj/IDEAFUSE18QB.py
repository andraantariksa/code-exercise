'''input
WENNWNNW
'''
x = 0
y = 0
for i in input():
    if i == 'E':
        x += 1
    elif i == 'W':
        x -= 1
    elif i == 'N':
        y += 1
    elif i == 'S':
        y -= 1

print(abs(x) + abs(y))
