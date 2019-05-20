'''input
Dia 5
08 : 12 : 23
Dia 9
06 : 13 : 23
'''
day1 = int(input().split("Dia ")[1])
time1 = list(map(int, input().split(" : ")))
day2 = int(input().split("Dia ")[1])
time2 = list(map(int, input().split(" : ")))

delta = (day2*24*60*60 + time2[0] * 60 * 60 + time2[1] * 60 + time2[2]) - (day1*24*60*60 + time1[0] * 60 * 60 + time1[1] * 60 + time1[2])

print("{} dia(s)".format(delta//(24*60*60)))
delta = delta%(24*60*60)
print("{} hora(s)".format(delta//(60*60)))
delta = delta%(60*60)
print("{} minuto(s)".format(delta//(60)))
delta = delta%(60)
print("{} segundo(s)".format(delta))
