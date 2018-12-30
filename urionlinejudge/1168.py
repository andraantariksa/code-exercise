#Author: Andra Antariksa
#Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/1168

led = [6, 2, 5, 5, 4, 5, 6, 3, 7, 6]

sumInp = input('')
for i in range(0, int(sumInp)):
    total = 0
    inp = input('')
    for i2 in inp:
        total += led[int(i2)]
    print("{} leds".format(total))
