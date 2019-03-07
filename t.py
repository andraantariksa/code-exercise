'''input
10 5
ACONG 8468431
BALAJI 1573547
GREGOR 1765743
JAPRA 3746843
JOKO 1357891
MALARANGENG 1375638
MANMOHAN 1357562
SITORUS 1378651
TERRY 8756345
YUDHOYONO 1781945
GREGOR
YUDHOYONO
ACONG
MANMOHAN
JAPRA
'''
n = tuple(map(int, input().split()))
d = {}
for _ in range(n[0]):
	s = input().split()
	if s[0] not in d:
		d[s[0]] = s[1]
for _ in range(n[1]):
	print(d[input()])