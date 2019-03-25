'''input
5
0
1
1007
2013
2014
'''
for i in range(int(input())):
    j = 2015 - int(input())
    if j > 0:
        print("{} D.C.".format(j))
    else:
        j += -1
        j = -j
        print("{} A.C.".format(j))
