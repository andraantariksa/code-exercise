//Author: Andra Antariksa
//Problem: https://www.urionlinejudge.com.br/judge/en/problems/view/2859
def digitRoot(number):
    total = 0
    for i in number:
        total += int(i)
    if total >= 10:
        return digitRoot(str(total))
    else:
        return total

B = int(input(''))
E = int(input(''))

print(digitRoot(str(B**E)))