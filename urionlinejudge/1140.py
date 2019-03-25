'''input
Flowers Flourish from France
Sam Simmonds speaks softly
Peter pIckEd pePPers
truly tautograms triumph
this is NOT a tautogram
*
'''
cont = False
while True:
    inp = input().split()
    if inp[0] == "*":
        break
    start = inp[0][0].lower()
    for i in inp:
        if i[0].lower() != start:
            print("N")
            cont = True
            break
    if cont:
        cont = False
        continue
    print("Y")
