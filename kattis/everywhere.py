'''input
2
7
saskatoon
toronto
winnipeg
toronto
vancouver
saskatoon
toronto
3
edmonton
edmonton
edmonton
'''
t_1 = int(input(''))
for _ in range(0, t_1):
    t_2 = int(input(''))
    places = []
    for __ in range(0, t_2):
        inp = input('')
        if inp not in places:
            places.append(inp)
    print(len(places))