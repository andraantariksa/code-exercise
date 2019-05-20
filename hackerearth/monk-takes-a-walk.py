#https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/monk-takes-a-walk/
#vowel = ["a", "i", "u", "e", "o"]
inp = int(input(''))
for i in range(0, inp):
    sum = 0
    inp2 = input('').lower()
    for i2 in inp2:
        if i2 in vowel:
           sum = sum + 1
    print(sum)